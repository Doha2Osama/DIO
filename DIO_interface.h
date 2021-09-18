//Header file that contain functions prototypes and some definitions and it will be very important to the user

#ifndef DIO_INTERFACE_H

#define DIO_INTERFACE_H

#define INPUT	 0//any input word in this program is equal 0

#define OUTPUT	 1

#define PORTA	 0

#define PORTB	 1

#define PORTC	 2

#define PORTD	 3

#define PIN0 	 0

#define PIN1 	 1

#define PIN2 	 2

#define PIN3 	 3

#define PIN4 	 4

#define PIN5  	 5

#define PIN6  	 6

#define PIN7  	 7

#define HIGH  	 1

#define PULLUP 	 1

#define NOPULLUP 0

#define LOW		 0

void DIO_voidSetPinDirection(u8 Copy_u8PortName,u8 Copy_u8PinName,u8 Copy_u8PinMode);//This prototype is made for setting the pin direction

void DIO_voidSetPinValue(u8 Copy_u8PortName,u8 Copy_u8PinName,u8 Copy_u8PinStatue);//This prototype is made for setting the pin value

void DIO_voidSetPortDirection(u8 Copy_u8PortName,u8 Copy_u8PortMode);//This prototype is made for setting the port direction

void DIO_voidSetPortSpecificValue(u8 Copy_u8PortName,u8 Copy_u8PortValue);//This prototype is made for setting the port a specific value

u8 DIO_u8GetPinValue(u8 Copy_u8PortName,u8 Copy_u8PinNumber);//This prototype is made for getting the pin value

void DIO_voidSetPortValue(u8 Copy_u8PortName,u8 Copy_u8PortStatue);//This prototype is made for setting the port value

u8 DIO_u8GetPortValue(u8 Copy_u8PortName);//This prototype is made for getting the port value

#endif
