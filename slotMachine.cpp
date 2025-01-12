#include "slotMachine.h"

int balance = 100;

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

void SlotMachine::slotMachinePage() {
	int payBalance;
	srand(time(0));

	if (balance >= 100) {
		std::cout << "How much you want to bet?" << std::endl;
		std::cin >> payBalance;

		if (payBalance >= 100) {
			payBalance -= balance;
			std::cout << "You have bet $" << payBalance << std::endl;

			std::vector<std::pair<std::string, double>> symbols = {
				{"Cherry", 0.45},
				{"Strawberry", 0.40},
				{"Orange", 0.38},
				{"Lemon", 0.35},
				{"Grape", 0.32},
				{"Plum", 0.30},
				{"Bell", 0.25},
				{"Watermelon", 0.22},
				{"Jackpot!", 0.05},
				{"Diamond", 0.03},
				{"SEVEN", 0.02}
			};

			std::vector<std::string> reel;
			for (const auto& symbol : symbols) {
				int rarity = static_cast<int>(symbol.second * 277);
				for (int i = 0; i < rarity; i++) {
					reel.push_back(symbol.first);
				}
			}

			int randIndex1 = rand() % reel.size();
			int randIndex2 = rand() % reel.size();
			int randIndex3 = rand() % reel.size();

			std::cout << reel[randIndex1] << " | " << reel[randIndex2] << " | " << reel[randIndex3] << std::endl;

			if (reel[randIndex1] == reel[randIndex2] && reel[randIndex2] == reel[randIndex3]) {
				std::cout << " " << std::endl;

			}
			else if (reel[randIndex1] == reel[randIndex2] || reel[randIndex1] == reel[randIndex3] || reel[randIndex2] == reel[randIndex3]) {
				std::cout << " " << std::endl;
			}
			else {
				std::cout << "You have lost your bet." << std::endl;
			}

		}
		else {
			std::cout << "You need to spend at least $100 to spin the slot machine." << std::endl;
			std::cin >> payBalance;
		}
	}
	else {
		std::cout << "You do not have access to spin the slot machine because your balance is lower than $100." << std::endl;
	}
}

void SlotMachine::freeMoneyPage() {
	int randomNumber = rand() % 10 + 1;
	int freeMoney = 100;
	int guess;

	std::cout << "Guess the right number from 1 to 10." << std::endl;
	std::cout << "You will be rewarded from $10 to $100 depends on the amount of tries." << std::endl << std::endl;

	do {
		std::cin >> guess;

		if (guess > randomNumber || guess < randomNumber) {
			std::cout << "Incorrect Number" << std::endl;
			freeMoney -= 10;
		}
		else {
			std::cout << "Correct Number" << std::endl;
		}

	} while (guess != randomNumber);
	
	if (freeMoney <= 0) {
		std::cout << "Sorry, you have been taken way too many tries. Please try again." << std::endl;
	}
	else if (freeMoney > 0 && freeMoney < 100) {
		std::cout << "Congrats! You have been rewarded: +$" << freeMoney << std::endl;
	}
	else {
		std::cout << "Congrats! You have been rewarded: +$" << freeMoney << std::endl;
		std::cout << "PERFECT GUESS!" << std::endl;
	}
	
	balance = freeMoney + balance;
	std::cout << "Now you have $" << balance << " in your balance." << std::endl;
}

void SlotMachine::balancePage() {
	std::cout << "Your Balance:\n" << "$" << balance << std::endl;
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
