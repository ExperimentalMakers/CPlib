/*
	Panel.h - Library for control panel.

	Version: 0.1.0
	(C) Vilém Raška & EM, May 31, 2020.


	This program is free software: you can redistribute it and/or modify
	it under the terms of the version 3 GNU General Public License as
	published by the Free Software Foundation.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.
	
	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef Panel_h
#define Panel_h

#include "Arduino.h"

//pin definitions inside the panel box
	#define BIT0_PIN 3
	#define BIT1_PIN 4
	#define BIT2_PIN 5

	#define BTN_LIGHT_PIN 6
	#define ONEWIRE_PIN 2
	#define PWR_READY A0

	#define PORT_A 7
	#define PORT_B 8
	#define PORT_C 9
	#define PORT_D 10
	#define PORT_E 11
	#define PORT_F 12
	#define PORT_G 13


class Panel {
	private:
		//atributes
		const byte _pins[13] = {BIT0_PIN, BIT1_PIN, BIT2_PIN, BTN_LIGHT_PIN, ONEWIRE_PIN, PWR_READY, PORT_A, PORT_B, PORT_C, PORT_D, PORT_E, PORT_F, PORT_G};

		//methods
		void SetPins();

	public:
		//atributes

		//methods
		Panel();
};

#endif