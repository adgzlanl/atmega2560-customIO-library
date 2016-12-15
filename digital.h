

#ifndef DIGITAL_H
#define DIGITAL_H

#include <avr/io.h>


#define HIGH 1
#define LOW 0
#define OUTPUT 1
#define INPUT 0
#define ENABLE 1
#define DISABLE 0

#define digitalWrite(port,pin,state) state ? (PORT ## port |= (1<<pin)) : (PORT ## port &= ~(1<<pin))  


#define pinMode(port,pin,state) state ? (DDR ## port |= (1<<pin)) : (DDR ## port &= ~(1<<pin))



#define digitalRead(port,pin) (PIN ## port & (1<<pin))



#define togglePin(port,pin) (PIN ## port |= (1<<pin))



#define internalPullup(port,pin,state) state ? (PORT ## port |= (1<<pin)) : (PORT ## port &= ~(1<<pin))

#endif
