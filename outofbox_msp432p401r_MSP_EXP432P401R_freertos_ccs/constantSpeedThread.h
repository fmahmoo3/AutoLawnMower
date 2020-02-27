
/* POSIX Header files */
#include <pthread.h>

#ifndef CONSTANTSPEEDTHREAD_H_
#define CONSTANTSPEEDTHREAD_H_


#ifdef __cplusplus
extern "C" {
#endif


extern pthread_t constantSpeedThread_handler;
extern void *constantSpeedThread(void *arg0);


#endif /* CONSTANTSPEEDTHREAD_H_ */
