// This program is a rolling dice. When executed it returns two random values between 1 and 6 that represents two dices.
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	long elapsedSeconds = time(0); // elapsed time since Jan. 1, 1970
	int diceOne, diceTwo, minValue, maxValue;
	
	srand(elapsedSeconds);
	diceOne = (rand() % 6 + 1);
	diceTwo = (rand() % 6 + 1);
	
	cout << "First Dice: "<< diceOne << "\n" << "Second Dice: " << diceTwo; 
	return 0;
}
