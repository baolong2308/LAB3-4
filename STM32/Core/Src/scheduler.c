/*
 * scheduler.c
 *
 *  Created on: Nov 26, 2024
 *      Author: admin
 */

#include"scheduler.h"
#include"global.h"

sTask SCH_tasks_G[SCH_MAX_TASKS];

void SCH_Init(void) {
	status = INIT;
	uint32_t i;
	for (i = 0; i < SCH_MAX_TASKS; i++) {
		SCH_Delete_Task(i);
	}
}

void SCH_Update(void) {
	uint32_t index;
	for (index = 0; index < SCH_MAX_TASKS; index++) {
		if (SCH_tasks_G[index].pTask) {
			if (SCH_tasks_G[index].Delay > 0) {
				SCH_tasks_G[index].Delay--;
			} else {
				SCH_tasks_G[index].RunMe++;
				if (SCH_tasks_G[index].Period) {

					SCH_tasks_G[index].Delay = SCH_tasks_G[index].Period;
				}
			}

		}
	}
}

void SCH_Add_Task(void (*pFunction)(), uint32_t DELAY, uint32_t PERIOD) {
	uint32_t index = 0;
	while ((SCH_tasks_G[index].pTask != 0) && (index < SCH_MAX_TASKS)) {
		index++;
	}
	SCH_tasks_G[index].pTask = pFunction;
	SCH_tasks_G[index].Delay = DELAY;
	SCH_tasks_G[index].Period = PERIOD;
	SCH_tasks_G[index].RunMe = 0;
	SCH_tasks_G[index].TaskID = index;

}
void SCH_Dispatch_Tasks(void) {
	uint32_t i;
	for (i = 0; i < SCH_MAX_TASKS; i++) {
		if (SCH_tasks_G[i].RunMe > 0) {
			(*SCH_tasks_G[i].pTask)();
			SCH_tasks_G[i].RunMe--;


			//one shot task
			if (SCH_tasks_G[i].Period == 0) {
				SCH_Delete_Task(i);

			}

		}
	}
}
void SCH_Delete_Task(uint32_t taskID) {
	SCH_tasks_G[taskID].pTask = 0;
	SCH_tasks_G[taskID].Delay = 0;
	SCH_tasks_G[taskID].Period = 0;
	SCH_tasks_G[taskID].RunMe = 0;
}
