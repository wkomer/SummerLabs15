// Selects a random number between 1-50 the user guesses it! 
//William Komer
//6-27-15

#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout; using std::cin; using std::endl;

int main(){

	srand(time(NULL));

	int guess, num = rand() % 50 + 1;

	cout << "Number was selected between 1-50, Guess a number:";
	do{
		cin >> guess;
		
		if (guess > num)
			cout << "Your guess is higher, reguess!\n";
		else if (guess < num)
			cout << "Your guess is lower,reguess!\n";
	} 
	while (guess != num);

	cout << "Correct!\n";

}