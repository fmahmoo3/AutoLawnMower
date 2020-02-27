#ifndef INITSUTILSCOMMANDS_H_
#define INITSUTILSCOMMANDS_H_

#include <ti/drivers/UART.h>
#include <ti/drivers/PWM.h>


/* Peripheral Init Functions */
extern void uartInit();
extern void pwmInit();
extern void timerInit();


/* Writing to UART Functions */
extern void getChar(char *val);
extern void putChar(char *val);
extern void putString(char *val);
extern int length(char *a);


/* Commands UART Functions */
extern void commandsInit();
extern int commandUnderstood(char a, char b);
extern void runCommand(char a, char b);

extern void toggleRed();
extern void toggleGreen();
extern void toggleBlue();

extern void start();
extern void backwards();
extern void stop();

extern void increasePWM();
extern void decreasePWM();

extern void lowSpeed();
extern void highSpeed();
extern void mediumSpeed();

extern void rotateRight();
extern void rotateLeft();


/* Constant Speed Helper Functions */
extern uint8_t getMoveStat();
extern void setRightMotorSpeed(int millisec);
extern int getRightMotorSpeed();



/* PWM Helper Functions */
extern uint32_t calculateDutyCycle(uint32_t percent);
extern void changeDutyCyclePercent(uint32_t percent, uint8_t motor);
extern void changeDutyCycle(uint32_t val, uint8_t motor);



#endif /* INITSUTILSCOMMANDS_H_ */
