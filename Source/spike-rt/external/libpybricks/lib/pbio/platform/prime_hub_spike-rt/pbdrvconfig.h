// SPDX-License-Identifier: MIT
// Copyright (c) 2018-2020 The Pybricks Authors
// Copyright (c) 2022 Embedded and Real-Time Systems Laboratory,
//            Graduate School of Information Science, Nagoya Univ., JAPAN

// TODO:
//#include <pbio/config.h>

#define PBDRV_ON_ASP3                               (1)

#define PBDRV_CONFIG_ADC                            (1)
#define PBDRV_CONFIG_ADC_STM32_HAL                  (1)
#define PBDRV_CONFIG_ADC_STM32_HAL_ADC_INSTANCE     ADC1
#define PBDRV_CONFIG_ADC_STM32_HAL_ADC_NUM_CHANNELS 6
#define PBDRV_CONFIG_ADC_STM32_HAL_DMA_INSTANCE     DMA2_Stream0
#define PBDRV_CONFIG_ADC_STM32_HAL_DMA_CHANNEL      DMA_CHANNEL_0
#define PBDRV_CONFIG_ADC_STM32_HAL_DMA_IRQ          DMA2_Stream0_IRQn
#define PBDRV_CONFIG_ADC_STM32_HAL_TIMER_INSTANCE   TIM2
#define PBDRV_CONFIG_ADC_STM32_HAL_TIMER_TRIGGER    ADC_EXTERNALTRIGCONV_T2_TRGO

#define PBDRV_CONFIG_BATTERY                        (1)
#define PBDRV_CONFIG_BATTERY_ADC                    (1)
#define PBDRV_CONFIG_BATTERY_ADC_VOLTAGE_CH         1
#define PBDRV_CONFIG_BATTERY_ADC_VOLTAGE_RAW_MAX    4096
#define PBDRV_CONFIG_BATTERY_ADC_VOLTAGE_SCALED_MAX 9900
#define PBDRV_CONFIG_BATTERY_ADC_CURRENT_CORRECTION 3
#define PBDRV_CONFIG_BATTERY_ADC_CURRENT_CH         0
#define PBDRV_CONFIG_BATTERY_ADC_CURRENT_RAW_OFFSET 0
#define PBDRV_CONFIG_BATTERY_ADC_CURRENT_RAW_MAX    4096
#define PBDRV_CONFIG_BATTERY_ADC_CURRENT_SCALED_MAX 7300
#define PBDRV_CONFIG_BATTERY_ADC_TYPE               (2)
#define PBDRV_CONFIG_BATTERY_ADC_TEMPERATURE        (1)
#define PBDRV_CONFIG_BATTERY_ADC_TEMPERATURE_CH     2

#define PBDRV_CONFIG_BLUETOOTH                      (1)
#define PBDRV_CONFIG_BLUETOOTH_BTSTACK              (1)
#define PBDRV_CONFIG_BLUETOOTH_BTSTACK_CONTROL_GPIO (1)
#define PBDRV_CONFIG_BLUETOOTH_BTSTACK_STM32_UART   (1)
#define PBDRV_CONFIG_BLUETOOTH_BTSTACK_HUB_KIND     LWP3_HUB_KIND_TECHNIC_LARGE
#define PBDRV_CONFIG_BLUETOOTH_BTSTACK_HUB_VARIANT_ADDR 0x08007d80

#define PBDRV_CONFIG_BLOCK_DEVICE                   (1)
#define PBDRV_CONFIG_BLOCK_DEVICE_W25QXX_STM32      (1)
#define PBDRV_CONFIG_BLOCK_DEVICE_W25QXX_STM32_W25Q256 (1)
// Carve out 256K from the reserved 1M area at the start of the flash.
// This avoids touching the file system, the area read by the LEGO
// bootloader and the area used by upstream MicroPython. Currently, this
// just needs to be big enough to back up the user program on shutdown.
#define PBDRV_CONFIG_BLOCK_DEVICE_W25QXX_STM32_START_ADDRESS (512 * 1024)
#define PBDRV_CONFIG_BLOCK_DEVICE_W25QXX_STM32_SIZE (256 * 1024)

#define PBDRV_CONFIG_BUTTON                         (1)
#define PBDRV_CONFIG_BUTTON_RESISTOR_LADDER         (1)

#define PBDRV_CONFIG_CHARGER                        (1)
#define PBDRV_CONFIG_CHARGER_MP2639A                (1)
#define PBDRV_CONFIG_CHARGER_MP2639A_MODE_PWM       (1)
#define PBDRV_CONFIG_CHARGER_MP2639A_CHG_RESISTOR_LADDER (1)
#define PBDRV_CONFIG_CHARGER_MP2639A_ISET_PWM       (1)

#define PBDRV_CONFIG_CLOCK                          (1)
#define PBDRV_CONFIG_CLOCK_ASP3                    (1)
// #define PBDRV_CONFIG_CLOCK_STM32                    (1)

#define PBDRV_CONFIG_COUNTER                        (1)
#define PBDRV_CONFIG_COUNTER_NUM_DEV                (6)
#define PBDRV_CONFIG_COUNTER_LPF2                   (1)
#define PBDRV_CONFIG_COUNTER_LPF2_NUM_DEV           (6) // TODO

#define PBDRV_CONFIG_GPIO                           (1)
#define PBDRV_CONFIG_GPIO_STM32F4                   (1)

#define PBDRV_CONFIG_IMU                            (1)
#define PBDRV_CONFIG_IMU_LSM6S3TR_C_STM32           (1)
#define PBDRV_CONFIG_IMU_LSM6S3TR_C_STM32_SIGN_X    (-1)
#define PBDRV_CONFIG_IMU_LSM6S3TR_C_STM32_SIGN_Y    (1)
#define PBDRV_CONFIG_IMU_LSM6S3TR_C_STM32_SIGN_Z    (-1)

#define PBDRV_CONFIG_IOPORT                         (1)
#define PBDRV_CONFIG_IOPORT_LPF2                    (1)
#define PBDRV_CONFIG_IOPORT_LPF2_NUM_PORTS          (6) //TODO
#define PBDRV_CONFIG_IOPORT_LPF2_FIRST_PORT         PBIO_PORT_ID_A
#define PBDRV_CONFIG_IOPORT_LPF2_LAST_PORT          PBIO_PORT_ID_F

#define PBDRV_CONFIG_LED                            (1)
#define PBDRV_CONFIG_LED_NUM_DEV                    (5)
#define PBDRV_CONFIG_LED_DUAL                       (1)
#define PBDRV_CONFIG_LED_DUAL_NUM_DEV               (1)
#define PBDRV_CONFIG_LED_PWM                        (1)
#define PBDRV_CONFIG_LED_PWM_NUM_DEV                (4)

#define PBDRV_CONFIG_LED_ARRAY                      (1)
#define PBDRV_CONFIG_LED_ARRAY_NUM_DEV              (1)
#define PBDRV_CONFIG_LED_ARRAY_PWM                  (1)
#define PBDRV_CONFIG_LED_ARRAY_PWM_NUM_DEV          (1)

#define PBDRV_CONFIG_MOTOR_DRIVER                   (1)
#define PBDRV_CONFIG_MOTOR_DRIVER_NUM_DEV           (6)
#define PBDRV_CONFIG_MOTOR_DRIVER_HBRIDGE_PWM       (1)

#define PBDRV_CONFIG_PWM                            (1)
#define PBDRV_CONFIG_PWM_NUM_DEV                    (7)
#define PBDRV_CONFIG_PWM_STM32_TIM                  (1)
#define PBDRV_CONFIG_PWM_STM32_TIM_NUM_DEV          (6)
#define PBDRV_CONFIG_PWM_STM32_TIM_EXTRA_FLAGS      (1)
#define PBDRV_CONFIG_PWM_TLC5955_STM32              (1)
#define PBDRV_CONFIG_PWM_TLC5955_STM32_NUM_DEV      (1)

#define PBDRV_CONFIG_RESET                          (1)
#define PBDRV_CONFIG_RESET_STM32                    (1)
#define PBDRV_CONFIG_RESET_STM32_HAS_BLE_BOOTLOADER (0)

#define PBDRV_CONFIG_RESISTOR_LADDER                (1)
#define PBDRV_CONFIG_RESISTOR_LADDER_NUM_DEV        (2)

#define PBDRV_CONFIG_SOUND                          (1)
#define PBDRV_CONFIG_SOUND_STM32_HAL_DAC            (1)

#define PBDRV_CONFIG_UART                           (1)
#define PBDRV_CONFIG_UART_STM32F4_LL_IRQ            (1)
#define PBDRV_CONFIG_UART_STM32F4_LL_IRQ_NUM_UART   (6)

#define PBDRV_CONFIG_USB                            (1)
#define PBDRV_CONFIG_USB_STM32F4                    (1)
#define PBDRV_CONFIG_USB_STM32F4_CDC                (1) // TODO

#define PBDRV_CONFIG_WATCHDOG                       (1)
#define PBDRV_CONFIG_WATCHDOG_STM32                 (1)

#define PBDRV_CONFIG_HAS_PORT_A (1)
#define PBDRV_CONFIG_HAS_PORT_B (1)
#define PBDRV_CONFIG_HAS_PORT_C (1)
#define PBDRV_CONFIG_HAS_PORT_D (1)
#define PBDRV_CONFIG_HAS_PORT_E (1)
//#define PBDRV_CONFIG_HAS_PORT_F (!PBIO_CONFIG_USE_PORT_F_AS_ASP3_DEBUG_UART)
#define PBDRV_CONFIG_HAS_PORT_F (1) // TODO:

#define PBDRV_CONFIG_FIRST_MOTOR_PORT       PBIO_PORT_ID_A
#if !PBDRV_CONFIG_HAS_PORT_F
#define PBDRV_CONFIG_LAST_MOTOR_PORT        PBIO_PORT_ID_E
#else
#define PBDRV_CONFIG_LAST_MOTOR_PORT        PBIO_PORT_ID_F
#endif
#define PBDRV_CONFIG_NUM_MOTOR_CONTROLLER   (6)

#define PBDRV_CONFIG_SYS_CLOCK_RATE 96000000
