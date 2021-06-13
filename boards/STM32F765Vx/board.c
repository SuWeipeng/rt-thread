/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2018-11-06     SummerGift   first version
 */

#include "board.h"

void rt_hw_console_output(const char *str)
{
  rt_enter_critical();
  while(*str!='\0') {
    if(*str=='\n') {
      ITM_SendChar('\r');
    }
    ITM_SendChar(*(str++));
  }
  rt_exit_critical();
}
