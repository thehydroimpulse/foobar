#include "mbed.h"
#include "drivers/accelerometer.h"

DigitalOut master_led(LED1);
Serial pc(USBTX, USBRX);
Accelerometer acc(A0, A1, A2);

int main() {
  while(1) {
    printf("x: (%d) \n\r", acc.gforce().x);
    wait(0.2f);
  }
}
