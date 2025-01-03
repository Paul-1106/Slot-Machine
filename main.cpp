#include "slotMachine.h"

int main() {

	SlotMachine slm;
	
	int option;
	slm.menuPage();


	std::cout << "Select number from 1-4" << std::endl;

	do {
		std::cin >> option;
		switch (option) {
			case 1:
				break;

			case 2:
				break;

			case 3:
				break;

			case 4:
				slm.instructionPage();
				break;

			case 5:
				break;

			default:
				break;
		}
	} while (option != 5);

	return 0;

}