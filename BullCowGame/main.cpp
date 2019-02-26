#include <iostream>
#include <string>

int main() {
	// introduce the game 
	constexpr int WORD_LENGTH = 5;
	std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
	std::cout << "Can you guess the " << WORD_LENGTH; 
	std::cout << " letter isogram I am thinking of?\n";
	std::cout << std::endl;

	// get a guess fromt he player 
	std::cout << "Enter your guess: ";
	std::string Guess = "";
	std::cin >> Guess;

	// repeat the guess back to them
	std::cout << "Your guess was: " << Guess << std::endl;

	// get a guess fromt he player 
	std::cout << "Enter your guess: ";
	std::cin >> Guess;

	// repeat the guess back to them
	std::cout << "Your guess was: " << Guess << std::endl;

	return 0;
}