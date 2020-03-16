#ifndef __ENTRY_H__
#define __ENTRY_H__

#include <stdio.h>
#include <rtthread.h>
#include <rtdevice.h>

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

#define RTT_MQ_CREATE(NAME,MSG_SIZE,MAX_MSGS,FLAG)          \
  NAME##_mq = rt_mq_create(#NAME,                           \
                           MSG_SIZE,                        \
                           MAX_MSGS,                        \
                           FLAG);                           \
  if(NAME##_mq != RT_NULL)                                  \
    rt_kprintf(#NAME " message queue create success!\n\n"); \
  else{                                                     \
    rt_kprintf(#NAME " message queue create failed!\n\n");  \
    return -1;                                              \
  }
  
#define RTT_SEM_CREATE(NAME,VALUE,FLAG)                \
  NAME##_sem = rt_sem_create(#NAME,                    \
                             VALUE,                    \
                             FLAG);                    \
  if(NAME##_sem != RT_NULL)                            \
    rt_kprintf(#NAME "semaphore create success!\n\n"); \
  else                                                 \
    rt_kprintf(#NAME "semaphore create failed!\n\n");
  
#define RTT_TIMER_CREATE(NAME,CALLBACK,ARGS,TIME,FLAG)  \
  NAME##_timer = rt_timer_create(#NAME,                 \
                                 CALLBACK,              \
								 ARGS,                  \
								 TIME,                  \
								 FLAG);                 \
  if(NAME##_timer != RT_NULL)	                        \
    rt_timer_start(NAME##_timer);                       \
  else{                                                 \
    rt_kprintf(#NAME " timer create failed!\n");        \
    return -1;                                          \
  }                                                     								 
#endif
