/* File: main.cpp
 * Author: Hong Eric
 * Source: https://github.com/platu/libsensehat-cpp
 *
 * Patron du code source des séances de travaux pratiques
 */

#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>

//#include <sensehat.h>

using namespace std;
//using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // system_clock, seconds, milliseconds

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Début constantes

// Fin constantes
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Début sous-programmes
/*
void dectCapteur(){
	pwmInit(0);
	pwmInit(1);
	gpioSetConfig(16,in);
	gpioSetConfig(17,in);
	pwmPeriod(0,10000);
	pwmPeriod(1,10000);
	pwmDutyCycle(0,40);
	pwmDutyCycle(1,40);
	pwmEnable(0);
	pwmEnable(1);
	if(gpioGetInput(16) == 1 && gpioGetInput(17) == 0 ){
		pwmDutyCycle(0,60);
	}
	if(gpioGetInput(17) == 1 && gpioGetInput(16) == 0 ){
		pwmDutyCycle(1,60);
	}
	if (gpioGetInput(16) == 0 && gpioGetInput(17) == 0)
	{
		pwmDutyCycle(0,0);
		pwmDutyCycle(1,0);
	}
}
*/

void Tetris(){

}
/*
void snake(){
	switch (direction)
	{
	case haut:
		y++;
		break;
	case bas:
		y--;
		break;
	case gauche:
		x--;
		break;
	case droite:
		x++;
		break;
	default:
		break;
	}
	// faire un if pour le second point
	while (x < 8 )
	{
		SenseSetRGBPixel(x,y,0,255,0);
	}
	while (y < 8)
	{
		SenseSetRGBPixel(x,y,0,255,0);
	}

}
*/
void Puissance4(){
    
}
// Fin sous-programmes
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

int main() {
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	// Début variables

	// Fin variables
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	/*if(senseInit()) {
		cout << "Sense Hat initialization Ok." << endl;
		// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		// Début instructions


		// Fin instructions
		// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		cout << "Press joystick button to quit." << endl;
		senseWaitForJoystickEnter();

		senseShutdown();
		cout << "Sense Hat shut down." << endl;
	}

	return EXIT_SUCCESS;
    */
}