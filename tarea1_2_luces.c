/*
 * tarea1_2lucess.c
 *
 * Created: 06/08/2020 9:49:06 p. m.
 * Author : Cliente 10
 */ 
#define F_CPU 16000000 /* Frecuencia de oscilacion */
#include <avr/io.h>
#include "util/delay.h"   /* Libreria para el tiempo */

int main(void)
{
    /* Replace with your application code */
	/*
	*DDRB = 0b11111111;    
	*PORTB = 0b00000000;
	*DDRA = 0b00000000;    
	*PORTA = 0b00000000;
	*
	*/
	
	DDRA &= ~(1<<DDA2); /*entradas*/
	DDRB |=(1<<DDB4);   /*salidas*/
	DDRB |=(1<<DDB6);   /*salidas*/
		
	PORTA |= (1<<PA2);   /*PULL UP*/
		
    while (1) 
    {
		if (!(PINA & (1<<PINA2)))
		{
			PORTB &=~ (1<<PB6);
			PORTB |= (1<<PB4);
		} 
		else
		{
			PORTB |= (1<<PB6);
			PORTB &=~ (1<<PB4);
		}	
    }
}

