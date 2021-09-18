/*
File Name:DIO_program
Author:DohaOsama
Date:16/8/2021
Description:DIO Driver (all functions in DIO module)
version 1.0
*/
#include "../../LIB/STD_TYPES.h"//library  contains all datatypes needed in this program
#include "../../LIB/BIT_MATH.h"//library contains clear and set and get and toggle bit it will be used in this program 
#include "DIO_interface.h"//it is a header file that contain functions prototypes and some definitions and it will be very important to the user
#include "DIO_private.h"//it is a header file that contains information very important in the program but it is not important for the user
#include "DIO_config.h"//it is a header file that make the DIO_program to be flexible for all users
/*


*/

void DIO_voidSetPinDirection(u8 Copy_u8PortName,u8 Copy_u8PinName,u8 Copy_u8PinMode)//function to set pin direction
{
	switch(Copy_u8PortName)
	{
		case PORTA :
					switch(Copy_u8PinMode)
					{
						case INPUT :
						CLEAR_BIT(DIO_DDRA,Copy_u8PinName);
						
						break;
						case OUTPUT :
						SET_BIT(DIO_DDRA,Copy_u8PinName);
						
						break;
						
					}
		break;	
		case PORTB :
					switch(Copy_u8PinMode)
					{
						case INPUT :
						CLEAR_BIT(DIO_DDRB,Copy_u8PinName);
						
						break;
						case OUTPUT :
						SET_BIT(DIO_DDRB,Copy_u8PinName);
						
						break;
						
					}
		break;	
		case PORTC :
					switch(Copy_u8PinMode)
					{
						case INPUT :
						CLEAR_BIT(DIO_DDRC,Copy_u8PinName);
						
						break;
						case OUTPUT :
						SET_BIT(DIO_DDRC,Copy_u8PinName);
						
						break;
						
					}
		break;	
		case PORTD :
					switch(Copy_u8PinMode)
					{
						case INPUT :
						CLEAR_BIT(DIO_DDRD,Copy_u8PinName);
						
						break;
						case OUTPUT :
						SET_BIT(DIO_DDRD,Copy_u8PinName);
						
						break;
						
					}
		break;	
		default :
		break;		
	}
}
void DIO_voidSetPinValue(u8 Copy_u8PortName,u8 Copy_u8PinName,u8 Copy_u8PinStatue)//function to set pin value
{
	switch(Copy_u8PortName)
	{
		case PORTA :
					switch(Copy_u8PinStatue)
					{
						case LOW ://case nopullup
						CLEAR_BIT(DIO_PORTA,Copy_u8PinName);
						break;
						case HIGH ://case pullup
							SET_BIT(DIO_PORTA,Copy_u8PinName);
						break;
						
					}
		break;	
		case PORTB :
					switch(Copy_u8PinStatue)
					{
						case LOW ://case nopullup
						CLEAR_BIT(DIO_PORTB,Copy_u8PinName);
						break;
						case HIGH ://case pullup
							SET_BIT(DIO_PORTB,Copy_u8PinName);
						break;
						
					}
		break;	
		case PORTC :
					switch(Copy_u8PinStatue)
					{
						case LOW ://case nopullup
						CLEAR_BIT(DIO_PORTC,Copy_u8PinName);
						break;
						case HIGH ://case pullup
							SET_BIT(DIO_PORTC,Copy_u8PinName);
						break;
						
					}
		break;
		case PORTD :
					switch(Copy_u8PinStatue)
					{
						case LOW ://case nopullup
						CLEAR_BIT(DIO_PORTD,Copy_u8PinName);
						break;
						case HIGH ://case pullup
							SET_BIT(DIO_PORTD,Copy_u8PinName);
						break;
						
					}
		break;	
		default :
		break;		
	}
}
u8 DIO_u8GetPinValue(u8 Copy_u8PortName,u8 Copy_u8PinNumber)//function to get pin value
{
	u8 LOCAL_u8PinValue;
	switch(Copy_u8PortName)
	{
		case PORTA :
		LOCAL_u8PinValue=GET_BIT(DIO_PINA,Copy_u8PinNumber);
		break;
		case PORTB :
		LOCAL_u8PinValue=GET_BIT(DIO_PINB,Copy_u8PinNumber);
		break;
		case PORTC :
		LOCAL_u8PinValue=GET_BIT(DIO_PINC,Copy_u8PinNumber);
		break;
		case PORTD :
		LOCAL_u8PinValue=GET_BIT(DIO_PIND,Copy_u8PinNumber);
		break;
		default :
		
		break;
	}
	return LOCAL_u8PinValue;
}
void DIO_voidSetPortDirection(u8 Copy_u8PortName,u8 Copy_u8PortMode)//function to set port direction
{
	switch(Copy_u8PortName)
	{
		case PORTA :
					switch(Copy_u8PortMode)
					{
						case INPUT :
						DIO_DDRA=INPUT_PORT_VALUE;
						
						break;
						case OUTPUT :
						DIO_DDRA=OUTPUT_PORT_VALUE;
						
						break;
						
					}
		break;	
		case PORTB :
					switch(Copy_u8PortMode)
					{
						case INPUT :
						DIO_DDRB=INPUT_PORT_VALUE;
						
						break;
						case OUTPUT :
						DIO_DDRB=OUTPUT_PORT_VALUE;
						
						break;
						
					}
		break;	
		case PORTC :
					switch(Copy_u8PortMode)
					{
						case INPUT :
						DIO_DDRC=INPUT_PORT_VALUE;
						
						break;
						case OUTPUT :
						DIO_DDRC=OUTPUT_PORT_VALUE;
						
						break;
						
					}
		break;	
		case PORTD :
					switch(Copy_u8PortMode)
					{
						case INPUT :
						DIO_DDRD=INPUT_PORT_VALUE;
						break;
						case OUTPUT :
						DIO_DDRD=OUTPUT_PORT_VALUE;
						break;	
					}
		break;
		default :
		
		break;
	}
}
void DIO_voidSetPortSpecificValue(u8 Copy_u8PortName,u8 Copy_u8PortValue)//function to set port specific value
{
	switch(Copy_u8PortName)
	{
		case PORTA :
					DIO_PORTA=Copy_u8PortValue;
		break;
		case PORTB :
					DIO_PORTB=Copy_u8PortValue;
		break;
		case PORTC :
					DIO_PORTC=Copy_u8PortValue;
		break;
		case PORTD :
					DIO_PORTD=Copy_u8PortValue;
		break;
		default :
		
		break;		
		
	}
}
void DIO_voidSetPortValue(u8 Copy_u8PortName,u8 Copy_u8PortStatue)//function to set port value //from here
{
	switch(Copy_u8PortName)
	{
		case PORTA :
					switch(Copy_u8PortStatue)
					{
						case LOW :
						DIO_PORTA=LOW_PORT_VALUE;
						break;
						case HIGH :
						DIO_PORTA=HIGH_PORT_VALUE;
						break;
					}
		break;
		case PORTB :
					switch(Copy_u8PortStatue)
					{
						case LOW :
						DIO_PORTB=LOW_PORT_VALUE;
						break;
						case HIGH :
						DIO_PORTB=HIGH_PORT_VALUE;
						break;
					}
		break;
		case PORTC :
					switch(Copy_u8PortStatue)
					{
						case LOW :
						DIO_PORTC=LOW_PORT_VALUE;
						break;
						case HIGH :
						DIO_PORTC=HIGH_PORT_VALUE;
						break;
					}
		break;
		case PORTD :
					switch(Copy_u8PortStatue)
					{
						case LOW :
						DIO_PORTD=LOW_PORT_VALUE;
						break;
						case HIGH :
						DIO_PORTD=HIGH_PORT_VALUE;
						break;
					}
		break;
		default :
		
		break;		
	}
}
u8 DIO_u8GetPortValue(u8 Copy_u8PortName)//function to get portvalue
{
	u8 LOCAL_u8PortValue;
	switch(Copy_u8PortName)
	{
		case PORTA :
		LOCAL_u8PortValue=DIO_PINA;
		break;
		case PORTB :
		LOCAL_u8PortValue=DIO_PINB;
		break;
		case PORTC :
		LOCAL_u8PortValue=DIO_PINC;
		break;
		case PORTD :
		LOCAL_u8PortValue=DIO_PIND;
		break;
		default :
		break;
	}
	return LOCAL_u8PortValue;
}