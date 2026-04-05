# STM32 LCD1602 Bare-Metal Driver

A lightweight bare-metal driver for the HD44780-based 16x2 LCD display, written in C for the STM32F103 (BluePill) without HAL or any external libraries.

## Features
- Initialize the LCD in 8-bit parallel mode
- Send commands and characters directly via GPIO
- Print strings at any cursor position
- Clear the display

## Hardware
- **MCU:** STM32F103C8T6 (BluePill)
- **Display:** 1602A (HD44780 controller)
- **Interface:** 8-bit parallel GPIO
- **Data bus:** GPIOA
- **Control pins:** GPIOC — RS (PC15), RW (PC14), EN (PC13)

## Project Structure
- `lcd.c / lcd.h` — core driver implementation
- `delay.c / delay.h` — delay utilities
- `main.c` — usage example
- `lcd.uvprojx` — Keil uVision project file

## Development Environment
- Keil uVision 5
- STM32F103C8T6

## API
```c
LCD_Init();                        // Initialize the LCD
LCD_String("Hello World!");        // Print a string
LCD_String_xy(0, 0, "Hello!");     // Print at specific row and position
LCD_Clear();                       // Clear the display
```
