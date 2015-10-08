//Lab 9 Game
//William Komer
//7-16-15

#include <iostream>
#include "battleship.h"
#include <ctime>

using std::cout; using std::cin; using std::endl;

int main(){
	srand(time(NULL));
	fleet myfleet;
	myfleet.deployFleet();

	char answer;
	cout << "Would you like the positions of the ships printed y/n" << endl;
	cin >> answer;

	if (answer == 'y'){
		myfleet.printFleet();
	}
	else
	{
		do{
			location shot;
			shot.fire();
			if (myfleet.isHitNSink(shot)){
				cout << "You Sunk a Ship" << endl;
			}
			else
				cout << "Miss, Try another location" << endl;
		} while (myfleet.operational());
		cout << "you sunk all of the ships!" << endl;
	}
}