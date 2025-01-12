#ifndef SLOTMACHINE_H
#define SLOTMACHINE_H

#include <iostream>
#include <vector>
#include <random>
#include <string>
#include <ctime>
#include <cstdlib>

class SlotMachine {
	public:

		void menuPage();
		void slotMachinePage();
		void instructionPage();
		void balancePage();
		void freeMoneyPage();

	private:
		int randomNumber;

};

#endif
