/*
 * pin.h
 *
 *  Created on: 28.03.2022.
 *      Author: student
 */

#ifndef PIN_H_
#define PIN_H_
// Makro za podesavanje visoke vrednosti signala na pinu
#define HIGH 1
// Makro za podesavanje niske vrednosti signala na pinu
#define LOW 0
// Makro za podesavanje izlaznog smera pina
#define OUTPUT 1
// Makro za podesavanje ulaznog smera pina
#define INPUT 0
// Makro za selektovanje porta B
#define PORT_B 0
// Makro za selektovanje porta C
#define PORT_C 1
// Makro za selektovanje porta D
#define PORT_D 2
// Makro za selektovanje pina na koji je povezana dioda
#define DIODE_PIN 5
// Makro za podesavanje periode u brzom rezimu treptanja
#define FAST 200
// Makro za podesavanje periode u sporom rezimu treptanja
#define SLOW 1000
// Makro za podesavanje broja brzih treptaja
#define FAST_REPS 15
// Makro za podesavanje broja sporih treptaja
#define SLOW_REPS 3
// Promenljiva koja skladisti broj milisekundi proteklih od

void pinPulsing (uint8_t port,uint8_t pin,uint32_t period,uint8_t num_of_repetitions);
/*
* pinPulse - Funkcija koja implementiran podizanje i spustanje
vrednosti na pinu odgovarajucom brzinom
*/
void pinPulse ( uint8_t port,uint8_t pin,uint32_t period );
/*
* pinSetValue - Funkcija koja postavlja vrednost na pinu
*/
void pinSetValue(uint8_t port,uint8_t pin,uint8_t value );
/*
* pinInit - Funkcija koja implementira inicijalizaciju pina
*/
void pinInit(uint8_t port,uint8_t pin,uint8_t direction);
/*
* timer0DelayMs - Funkcija koja implementira pauzu u broju
milisekundi koji je prosledjen kao parametar
*/





#endif /* PIN_H_ */


























