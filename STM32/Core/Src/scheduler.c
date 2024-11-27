/*
 * scheduler.c
 *
 *  Created on: Nov 26, 2024
 *      Author: admin
 */

#include"scheduler.h"
sTask SCH_tasks_G[SCH_MAX_TASKS];

void SCH_Init(void) {
	unsigned char i;
	for (i = 0; i < SCH_MAX_TASKS; i++) {
		//SCH_Delete_Task(i);
	}
}

void SCH_Update(void) {
	unsigned char index;
	for (index = 0; index < SCH_MAX_TASKS; index++) {
		if (SCH_tasks_G[index].pTask) {
			if (SCH_tasks_G[index].Delay == 0) {
				SCH_tasks_G[index].RunMe++;
				SCH_tasks_G[index].Delay = SCH_tasks_G[index].Period;

			} else {
				SCH_tasks_G[index].Delay--;
			}
		}
	}
}

void SCH_Add_Task(void (*pFunction)(), unsigned int DELAY, unsigned int PERIOD) {
	unsigned char i = 0;
	while ((SCH_tasks_G[i].pTask != 0) && (i < SCH_MAX_TASKS)) {
		i++;
	}
	SCH_tasks_G[i].pTask = pFunction;
	SCH_tasks_G[i].Delay = DELAY;
	SCH_tasks_G[i].Period = PERIOD;
	SCH_tasks_G[i].RunMe = 0;
	SCH_tasks_G[i].TaskID = i;
}
void SCH_Dispatch_Tasks(void) {
	unsigned char i;
	for (i = 0; i < SCH_MAX_TASKS; i++) {
		if (SCH_tasks_G[i].RunMe > 0) {
			(*SCH_tasks_G[i].pTask)();
			SCH_tasks_G[i].RunMe--;

		}
	}
}
//unsigned char SCH_Delete_Task(const tByte TASK_INDEX){
//	unsigned char Return_code ;
//	if ( SCH_tasks_G [TASK_INDEX ] . pTask == 0 ) {
//		Error_code_G = ERROR_SCH_CANNOT_DELETE_TASK;
//	}
//}
