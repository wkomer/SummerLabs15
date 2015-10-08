//Game for Battleship
//William Komer
//3-25-15

#include <iostream>
#include "battleship.h"
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
	ship ships[FLEET_SIZE];
	location spot;
	int current;
	srand(time(NULL));
	initialize(ships);
	deploy(ships);
	char ans;
	cout << "Do you want to see the status of the fleet? (y/n)" << endl;
	cin >> ans;

	do{
		spot = fire();
		current = check(ships, spot);
		if (current == -1){
			cout << "you didnt Hit a Ship" << endl;
			if (ans == 'y'){
				printFleet;
			}
		}
		else{
			cout << "You Hit a Ship" << endl;
			if (ans == 'y'){
				printFleet;
			}
		}
		sink(ships[current]);

	}


	while (operational(ships) == true);

	cout << "You sunk all the ships" << endl;

}