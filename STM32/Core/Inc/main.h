/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define SEG2_7_Pin GPIO_PIN_0
#define SEG2_7_GPIO_Port GPIOA
#define Button_1_Pin GPIO_PIN_1
#define Button_1_GPIO_Port GPIOA
#define Button_2_Pin GPIO_PIN_2
#define Button_2_GPIO_Port GPIOA
#define Button_3_Pin GPIO_PIN_3
#define Button_3_GPIO_Port GPIOA
#define LED_GREEN_Pin GPIO_PIN_4
#define LED_GREEN_GPIO_Port GPIOA
#define LED_RED_Pin GPIO_PIN_5
#define LED_RED_GPIO_Port GPIOA
#define LED_1_Pin GPIO_PIN_6
#define LED_1_GPIO_Port GPIOA
#define LED_2_Pin GPIO_PIN_7
#define LED_2_GPIO_Port GPIOA
#define SEG0_5_Pin GPIO_PIN_0
#define SEG0_5_GPIO_Port GPIOB
#define SEG0_6_Pin GPIO_PIN_1
#define SEG0_6_GPIO_Port GPIOB
#define SEG0_7_Pin GPIO_PIN_2
#define SEG0_7_GPIO_Port GPIOB
#define SEG2_1_Pin GPIO_PIN_10
#define SEG2_1_GPIO_Port GPIOB
#define SEG2_2_Pin GPIO_PIN_11
#define SEG2_2_GPIO_Port GPIOB
#define SEG2_3_Pin GPIO_PIN_12
#define SEG2_3_GPIO_Port GPIOB
#define SEG2_4_Pin GPIO_PIN_13
#define SEG2_4_GPIO_Port GPIOB
#define SEG2_5_Pin GPIO_PIN_14
#define SEG2_5_GPIO_Port GPIOB
#define SEG2_6_Pin GPIO_PIN_15
#define SEG2_6_GPIO_Port GPIOB
#define LED_3_Pin GPIO_PIN_8
#define LED_3_GPIO_Port GPIOA
#define LED_4_Pin GPIO_PIN_9
#define LED_4_GPIO_Port GPIOA
#define LED_5_Pin GPIO_PIN_10
#define LED_5_GPIO_Port GPIOA
#define LED_6_Pin GPIO_PIN_11
#define LED_6_GPIO_Port GPIOA
#define SEG0_1_Pin GPIO_PIN_12
#define SEG0_1_GPIO_Port GPIOA
#define SEG0_2_Pin GPIO_PIN_13
#define SEG0_2_GPIO_Port GPIOA
#define SEG0_3_Pin GPIO_PIN_14
#define SEG0_3_GPIO_Port GPIOA
#define SEG0_4_Pin GPIO_PIN_15
#define SEG0_4_GPIO_Port GPIOA
#define SEG1_1_Pin GPIO_PIN_3
#define SEG1_1_GPIO_Port GPIOB
#define SEG1_2_Pin GPIO_PIN_4
#define SEG1_2_GPIO_Port GPIOB
#define SEG1_3_Pin GPIO_PIN_5
#define SEG1_3_GPIO_Port GPIOB
#define SEG1_4_Pin GPIO_PIN_6
#define SEG1_4_GPIO_Port GPIOB
#define SEG1_5_Pin GPIO_PIN_7
#define SEG1_5_GPIO_Port GPIOB
#define SEG1_6_Pin GPIO_PIN_8
#define SEG1_6_GPIO_Port GPIOB
#define SEG1_7_Pin GPIO_PIN_9
#define SEG1_7_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
