#ifndef __ENTRY_H__
#define __ENTRY_H__

#include <rtthread.h>
#include <rtdevice.h>
#include <board.h>

#define LED_B_PIN    GET_PIN(D, 15)

#define RTT_CREATE(NAME,ENTRY,ARGS,STACK_SIZE,PRI,TICK)  \
  NAME##_thread = rt_thread_create(#NAME,                \
                                   ENTRY,                \
                                   ARGS,                 \
                                   STACK_SIZE,           \
                                   PRI,                  \
                                   TICK);                \
  if(NAME##_thread != RT_NULL)	                         \
    rt_thread_startup(NAME##_thread);                    \
  else{                                                  \
    rt_kprintf(#NAME " thread create failed!\n");        \
    return -1;                                           \
  }                                                      \

#endif
