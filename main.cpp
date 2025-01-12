#include "slotMachine.h"

int main() {

	SlotMachine obj;
	
	int option;
	obj.menuPage();


	std::cout << "Select number from 1-4" << std::endl;

	do {
		std::cin >> option;
		switch (option) {
			case 1:
				obj.slotMachinePage();
				break;

			case 2:
				obj.freeMoneyPage();
				break;

			case 3:
				obj.balancePage();
				break;

			case 4:
				obj.instructionPage();
				break;

			case 5:
				std::cout << "You have exited the game!" << std::endl;
				break;

			default:
				break;
		}
	} while (option != 5);

	return 0;

}