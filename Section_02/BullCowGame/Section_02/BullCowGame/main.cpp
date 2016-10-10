#include <iostream>
#include <string>
using namespace std;
4
void PrintIntro();
string GetGuessAndPrintBack();

int main()
{
	PrintIntro();

	//loop for guess count number
	constexpr int TURN_NUM = 5;
	for (int count = 1; count <= TURN_NUM; count++) 
	{
		GetGuessAndPrintBack();
		cout << endl;
	}
	return 0;
}

void PrintIntro()
{
	// introduction to the game
	constexpr int WORD_LENGTH = 9;
	cout << "Welcome to bulls and cows, a fun word game.\n";
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram i'm thinking of?\n\n";
	return;
}
string GetGuessAndPrintBack()
{
	// player's guess input taken here
	cout << "Enter your guess: ";
	string PlayerGuess = "";
	getline(cin, PlayerGuess);
	// repeat the guess back to the player
	cout << "Your guess is: " << PlayerGuess << endl;
	return PlayerGuess;
}

