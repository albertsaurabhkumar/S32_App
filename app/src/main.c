/*
**  Processor: S32K144
**  Author: Saurabh Kumar
**  GCC Version: 12.3
**  
**  Main program file for the GCC Compiler
*/

/*   PortPCR(PORTA,PIN11);
  PortPCR(PORTB,PIN4);
  DataDirectionGPIO(PTB,PIN4);
  DataDirectionGPIO(PTA,PIN11); */

#include "main.h"
#include "clock.h"
#include "port.h"
#include "wdog.h"
#include "common.h"

volatile uint32_t dlyCnt;
volatile uint32_t counter;

void delay(uint32_t a) {
  while(a>0){
    a--;
    dlyCnt=a;
  }
}

int main(void) {
/*   initClk();
  DisableWDOG();
  PortPCR(PORTA,PIN11);
  DataDirectionGPIO(PTA,PIN11); */
  while(1)
  {
    ToggleGPIO(PTA,PIN11);
    delay(150000);
    // Never returns from this loop 
  }
  return 0;
}