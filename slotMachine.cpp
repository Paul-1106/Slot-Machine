#include "slotMachine.h"

double balance = 500;

void SlotMachine::menuPage() {
	std::cout << "******************************" << std::endl;
	std::cout << "*      777 SLOT MACHINE      *" << std::endl;
	std::cout << "******************************" << std::endl;
	std::cout << "* 1. Spin the Wheel! ($100+) *" << std::endl;
	std::cout << "* 2. Free Money              *" << std::endl;
	std::cout << "* 3. My Balance              *" << std::endl;
	std::cout << "* 4. Instructions            *" << std::endl;
	std::cout << "* 5. Review the Menu Page    *" << std::endl;
	std::cout << "* 9. Exit                    *" << std::endl;
	std::cout << "******************************" << std::endl;
}

void SlotMachine::slotMachinePage() {
	double payBalance;
	double rewardBalance;
	double jackpotBalance;
	std::string goBack;
	srand(time(0));

	if (balance >= 100) { // If the user has at least $100
		std::cout << "How much you want to bet?" << std::endl;
		std::cin >> payBalance;

		if (payBalance >= 100) {
			balance -= payBalance;
			std::cout << "You have bet $" << payBalance << std::endl;

			std::vector<std::pair<std::string, double>> symbols = { // The weight of each symbol (rarity).
				{"Cherry", 0.45},
				{"Strawberry", 0.40},
				{"Orange", 0.38},
				{"Lemon", 0.35},
				{"Grape", 0.32},
				{"Plum", 0.30},
				{"Bell", 0.25},
				{"Watermelon", 0.22},
				{"Jackpot!", 0.08},
				{"Diamond", 0.05},
				{"SEVEN", 0.02}
			};

			std::vector<std::string> reel;
			for (const auto& symbol : symbols) {
				int rarity = static_cast<int>(symbol.second * 282);
				for (int i = 0; i < rarity; i++) {
					reel.push_back(symbol.first);
				}
			}

			int randIndex1 = rand() % reel.size();
			int randIndex2 = rand() % reel.size();
			int randIndex3 = rand() % reel.size();
			int randIndex4 = rand() % reel.size();
			int randIndex5 = rand() % reel.size();
			int randIndex6 = rand() % reel.size();
			int randIndex7 = rand() % reel.size();
			int randIndex8 = rand() % reel.size();
			int randIndex9 = rand() % reel.size();

			std::cout << "****************************" << std::endl;
			std::cout << reel[randIndex4] << " | " << reel[randIndex5] << " | " << reel[randIndex6] << std::endl;
			std::cout << "= " << reel[randIndex1] << " | " << reel[randIndex2] << " | " << reel[randIndex3] << " =" << std::endl;
			std::cout << reel[randIndex7] << " | " << reel[randIndex8] << " | " << reel[randIndex9] << std::endl;
			std::cout << "****************************" << std::endl;

			if (reel[randIndex1] == reel[randIndex2] && reel[randIndex2] == reel[randIndex3]) {
				if (reel[randIndex1] == "Cherry" && reel[randIndex2] == "Cherry" && reel[randIndex3] == "Cherry") {
					rewardBalance = payBalance * 1.5;
					std::cout << "[WIN] You have been rewarded +$" << rewardBalance << std::endl;
					balance += rewardBalance;
				}
				if (reel[randIndex1] == "Strawberry" && reel[randIndex2] == "Strawberry" && reel[randIndex3] == "Strawberry") {
					rewardBalance = payBalance * 2;
					std::cout << "[WIN] You have been rewarded +$" << rewardBalance << std::endl;
					balance += rewardBalance;
				}
				if (reel[randIndex1] == "Orange" && reel[randIndex2] == "Orange" && reel[randIndex3] == "Orange") {
					rewardBalance = payBalance * 3;
					std::cout << "[WIN] You have been rewarded +$" << rewardBalance << std::endl;
					balance += rewardBalance;
				}
				if (reel[randIndex1] == "Lemon" && reel[randIndex2] == "Lemon" && reel[randIndex3] == "Lemon") {
					rewardBalance = payBalance * 6;
					std::cout << "[WIN] You have been rewarded +$" << rewardBalance << std::endl;
					balance += rewardBalance;
				}
				if (reel[randIndex1] == "Grape" && reel[randIndex2] == "Grape" && reel[randIndex3] == "Grape") {
					rewardBalance = payBalance * 8.25;
					std::cout << "[WIN] You have been rewarded +$" << rewardBalance << std::endl;
					balance += rewardBalance;
				}
				if (reel[randIndex1] == "Plum" && reel[randIndex2] == "Plum" && reel[randIndex3] == "Plum") {
					rewardBalance = payBalance * 9;
					std::cout << "[WIN] You have been rewarded +$" << rewardBalance << std::endl;
					balance += rewardBalance;
				}
				if (reel[randIndex1] == "Bell" && reel[randIndex2] == "Bell" && reel[randIndex3] == "Bell") {
					rewardBalance = payBalance * 12.5;
					std::cout << "[WIN] You have been rewarded +$" << rewardBalance << std::endl;
					balance += rewardBalance;
				}
				if (reel[randIndex1] == "Watermelon" && reel[randIndex2] == "Watermelon" && reel[randIndex3] == "Watermelon") {
					rewardBalance = payBalance * 15;
					std::cout << "[WIN] You have been rewarded +$" << rewardBalance << std::endl;
					balance += rewardBalance;
				}
				if (reel[randIndex1] == "Jackpot!" && reel[randIndex2] == "Jackpot!" && reel[randIndex3] == "Jackpot!") {
					jackpotBalance = payBalance * 50;
					rewardBalance = pow(3.5, jackpotBalance);
					std::cout << "[JACKPOT!] You have been rewarded +$" << rewardBalance << std::endl;
					balance += rewardBalance;
				}
				if (reel[randIndex1] == "Diamond" && reel[randIndex2] == "Diamond" && reel[randIndex3] == "Diamond") {
					jackpotBalance = payBalance * 250;
					rewardBalance = pow(5, jackpotBalance);
					std::cout << "[JACKPOT!] You have been rewarded +$" << rewardBalance << std::endl;
					balance += rewardBalance;
				}
				if (reel[randIndex1] == "SEVEN" && reel[randIndex2] == "SEVEN" && reel[randIndex3] == "SEVEN") {
					jackpotBalance = payBalance * 777;
					rewardBalance = pow(7, jackpotBalance);
					std::cout << "[JACKPOT!] You have been rewarded +$" << rewardBalance << std::endl;
					balance += rewardBalance;
				}

			}
			else if (reel[randIndex1] == reel[randIndex2] || reel[randIndex1] == reel[randIndex3] || reel[randIndex2] == reel[randIndex3]) {

				if ((reel[randIndex1] == "Cherry" && reel[randIndex2] == "Cherry") || (reel[randIndex2] == "Cherry" && reel[randIndex3] == "Cherry")
					|| (reel[randIndex1] == "Cherry" && reel[randIndex3] == "Cherry")) {
						rewardBalance = payBalance * 0.5;
						std::cout << "[WIN] You have been rewarded +$" << rewardBalance << std::endl;
						balance += rewardBalance;
				}
				else if ((reel[randIndex1] == "Strawberry" && reel[randIndex2] == "Strawberry") || (reel[randIndex2] == "Strawberry" && reel[randIndex3] == "Strawberry")
					|| (reel[randIndex1] == "Strawberry" && reel[randIndex3] == "Strawberry")) {
						rewardBalance = payBalance * 1;
						std::cout << "[WIN] You have been rewarded +$" << rewardBalance << std::endl;
						balance += rewardBalance;
				}
				else if ((reel[randIndex1] == "Orange" && reel[randIndex2] == "Orange") || (reel[randIndex2] == "Orange" && reel[randIndex3] == "Orange")
					|| (reel[randIndex1] == "Orange" && reel[randIndex3] == "Orange")) {
						rewardBalance = payBalance * 1.5;
						std::cout << "[WIN] You have been rewarded +$" << rewardBalance << std::endl;
						balance += rewardBalance;
				}
				else if ((reel[randIndex1] == "Lemon" && reel[randIndex2] == "Lemon") || (reel[randIndex2] == "Lemon" && reel[randIndex3] == "Lemon")
					|| (reel[randIndex1] == "Lemon" && reel[randIndex3] == "Lemon")) {
						rewardBalance = payBalance * 3;
						std::cout << "[WIN] You have been rewarded +$" << rewardBalance << std::endl;
						balance += rewardBalance;
				}
				else if ((reel[randIndex1] == "Grape" && reel[randIndex2] == "Grape") || (reel[randIndex2] == "Grape" && reel[randIndex3] == "Grape")
					|| (reel[randIndex1] == "Grape" && reel[randIndex3] == "Grape")) {
						rewardBalance = payBalance * 4;
						std::cout << "[WIN] You have been rewarded +$" << rewardBalance << std::endl;
						balance += rewardBalance;
				}
				else if ((reel[randIndex1] == "Plum" && reel[randIndex2] == "Plum") || (reel[randIndex2] == "Plum" && reel[randIndex3] == "Plum")
					|| (reel[randIndex1] == "Plum" && reel[randIndex3] == "Plum")) {
						rewardBalance = payBalance * 4.5;
						std::cout << "[WIN] You have been rewarded +$" << rewardBalance << std::endl;
						balance += rewardBalance;
				}
				else if ((reel[randIndex1] == "Bell" && reel[randIndex2] == "Bell") || (reel[randIndex2] == "Bell" && reel[randIndex3] == "Bell")
					|| (reel[randIndex1] == "Bell" && reel[randIndex3] == "Bell")) {
						rewardBalance = payBalance * 5.5;
						std::cout << "[WIN] You have been rewarded +$" << rewardBalance << std::endl;
						balance += rewardBalance;
				}
				else if ((reel[randIndex1] == "Watermelon" && reel[randIndex2] == "Watermelon") || (reel[randIndex2] == "Watermelon" && reel[randIndex3] == "Watermelon")
					|| (reel[randIndex1] == "Watermelon" && reel[randIndex3] == "Watermelon")) {
						rewardBalance = payBalance * 6.5;
						std::cout << "[WIN] You have been rewarded +$" << rewardBalance << std::endl;
						balance += rewardBalance;
				}
				else if ((reel[randIndex1] == "Jackpot!" && reel[randIndex2] == "Jackpot!") || (reel[randIndex2] == "Jackpot!" && reel[randIndex3] == "Jackpot!")
					|| (reel[randIndex1] == "Jackpot!" && reel[randIndex3] == "Jackpot!")) {
						jackpotBalance = payBalance * 20;
						rewardBalance = pow(2, jackpotBalance);
						std::cout << "[JACKPOT!] You have been rewarded +$" << rewardBalance << std::endl;
						balance += rewardBalance;
				}
				else if ((reel[randIndex1] == "Diamond" && reel[randIndex2] == "Diamond") || (reel[randIndex2] == "Diamond" && reel[randIndex3] == "Diamond")
					|| (reel[randIndex1] == "Diamond" && reel[randIndex3] == "Diamond")) {
						jackpotBalance = payBalance * 45;
						rewardBalance = pow(4.5, jackpotBalance);
						std::cout << "[JACKPOT!] You have been rewarded +$" << rewardBalance << std::endl;
						balance += rewardBalance;
				}
				else if ((reel[randIndex1] == "SEVEN" && reel[randIndex2] == "SEVEN") || (reel[randIndex2] == "SEVEN" && reel[randIndex3] == "SEVEN")
					|| (reel[randIndex1] == "SEVEN" && reel[randIndex3] == "SEVEN")) {
						jackpotBalance = payBalance * 77;
						rewardBalance = pow(7, jackpotBalance);
						std::cout << "[JACKPOT!] You have been rewarded +$" << rewardBalance << std::endl;
						balance += rewardBalance;
				}
			}
			else {
				std::cout << "[LOSE] You have lost your bet." << std::endl;
			}

		}
		else {
			std::cout << "You need to spend at least $100 to spin the slot machine." << std::endl;
		}
	}
	else {
		std::cout << "You do not have access to spin the slot machine because your balance is lower than $100." << std::endl;
	}
	std::cout << "Type '5' to go back to the menu page." << std::endl;
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
			if (freeMoney <= 0) {
				break;
			}
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
	std::cout << "Type '5' to review the menu page." << std::endl;
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
	std::cout << "- Depends on the amount of tries you guess the number, you will win at a range from $10 - $100" << std::endl << std::endl;
	std::cout << "Type '5' to review the menu page." << std::endl;
}
