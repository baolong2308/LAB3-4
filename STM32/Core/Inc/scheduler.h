/*
 * scheduler.h
 *
 *  Created on: Nov 26, 2024
 *      Author: admin
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_
#include<stdint.h>
#include<stdio.h>
typedef struct {
	void (*pTask)(void);
	uint32_t Delay;
	uint32_t Period;
	uint8_t RunMe;
	uint32_t TaskID;

} sTask;

#define SCH_MAX_TASKS	40
#define Tick	10
void SCH_Init(void);
void SCH_Add_Task(void (*pFunction)(), uint32_t DELAY, uint32_t PERIOD);//setTimer
void SCH_Update(void);	//TimmerRun
void SCH_Dispatch_Tasks(void);	//check flag
void SCH_Delete_Task(uint32_t taskID);

#endif /* INC_SCHEDULER_H_ */
