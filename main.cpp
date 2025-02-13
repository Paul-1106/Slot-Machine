#include "slotMachine.h"

int main() {

	SlotMachine obj;
	
	int option;
	std::string mPage;
	obj.menuPage();


	std::cout << "Select number from 1-4 or 9 to exit." << std::endl;

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
				obj.menuPage();
				break;

			case 9:
				std::cout << "You have exited the game!" << std::endl;
				break;

			default:
				std::cout << "Please enter a valid option from 1 - 4 or 9 to exit" << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	} while (option != 9);

	return 0;

}