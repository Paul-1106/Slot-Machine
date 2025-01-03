#include "slotMachine.h"


void SlotMachine::menuPage() {
	std::cout << "******************************" << std::endl;
	std::cout << "*      777 SLOT MACHINE      *" << std::endl;
	std::cout << "******************************" << std::endl;
	std::cout << "* 1. Spin the Wheel! ($100+) *" << std::endl;
	std::cout << "* 2. Free Money              *" << std::endl;
	std::cout << "* 3. My Balance              *" << std::endl;
	std::cout << "* 4. Instructions            *" << std::endl;
	std::cout << "* 5. Exit the Game           *" << std::endl;
	std::cout << "******************************" << std::endl;
}

void SlotMachine::instructionPage() {
	std::cout << "******************************" << std::endl;
	std::cout << "         INSTRUCTIONS         " << std::endl;
	std::cout << "******************************" << std::endl;
	std::cout << "- Option 1: ----------------" << std::endl;
	std::cout << "- In Order to spin the slot machine, you will need to bet at least $100." << std::endl;
	std::cout << "- Here are all of the symbols: " << std::endl;
	std::cout << "* Cherry (Weight: 10/10)" << std::endl;
	std::cout << "* Strawberry (Weight: 8/10)" << std::endl;
	std::cout << "* Orange (Weight: 8/10)" << std::endl;
	std::cout << "* Lemon (Weight: 7/10)" << std::endl;
	std::cout << "* Grape (Weight: 6/10)" << std::endl;
	std::cout << "* Plum (Weight: 6/10)" << std::endl;
	std::cout << "* Bell (Weight: 4/10)" << std::endl;
	std::cout << "* Watermelon (Weight: 4/10)" << std::endl;
	std::cout << "* Jackpot! (Weight: 2/10)" << std::endl;
	std::cout << "* Diamond (Weight: 2/10)" << std::endl;
	std::cout << "* SEVEN (Weight: 1/10)" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "The 'weight' determines the rarity." << std::endl;
	std::cout << "- Option 2: -----------------" << std::endl;
	std::cout << "- If you have less than $100 in your balance, go to option two to get free money." << std::endl;
	std::cout << "- When you go to the free money section, you will begin to play a random number game." << std::endl;
	std::cout << "- Depends on the amount of tries you guess the number, you will win at a range from $10 - $100" << std::endl;
}