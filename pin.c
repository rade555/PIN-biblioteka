/*
 * pin.c
 *
 *  Created on: 28.03.2022.
 *      Author: student
 */
#include "pin.h"

void pinPulsing ( uint8_t port , uint8_t pin , uint32_t period ,
uint8_t num_of_repetitions )
{
uint8_t i ;
// Implementacija num_of_repetitions perioda
for ( i = 0; i < num_of_repetitions ; i ++)
pinPulse ( port , pin , period ) ;
}
/* ********************************************************* */
void pinPulse (uint8_t port,uint8_t pin,uint32_t period )
{
// Poluperioda u kojoj pin ima visoku vrednost
pinSetValue ( port , pin , HIGH ) ;
timer0DelayMs ( calculateHalfPeriod ( period ) ) ;
// Poluperioda u kojoj pin ima nisku vrednost
pinSetValue ( port , pin , LOW ) ;
timer0DelayMs ( calculateHalfPeriod ( period ) ) ;
}
/* ********************************************************* */
void pinSetValue( uint8_t port , uint8_t pin , uint8_t value )
{
// Postavljanje vrednosti pina
switch ( port )
{
case PORT_B :
if ( value == HIGH )
PORTB |= 1 << pin;
else
PORTB &= ~(1 << pin ) ;
break ;
case PORT_C :
if ( value == HIGH )
PORTC |= 1 << pin ;
else
PORTC &= ~(1 << pin ) ;
break ;
case PORT_D :
if ( value == HIGH )
PORTD |= 1 << pin ;
else
PORTD &= ~(1 << pin ) ;
break ;
default :
break ;
}
}
/* ********************************************************* */
void pinInit ( uint8_t port , uint8_t pin , uint8_t direction )
{
// Inicijalizacija smera pina
switch ( port )
{
case PORT_B :
if ( direction == OUTPUT )
DDRB |= 1 << pin ;
else
DDRB &= ~(1<<pin ) ;
break ;
case PORT_C :
if ( direction == OUTPUT )
DDRC |= 1 << pin ;
else
DDRC &= ~(1<<pin ) ;
break ;
case PORT_D :
if ( direction == OUTPUT )
DDRD |= 1 << pin ;
else
DDRD &= ~(1<<pin) ;
break ;
default :
break ;
}
}
