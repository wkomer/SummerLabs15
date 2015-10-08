/*/Battleship game testing first.
//William Komer
//7-7-15

#include <iostream>
#include "battleship.h"

using std::cout; using std::cin; using std::endl;

// Use this cpp for function definitions!!! 

location pick(){
	location temp;
	temp.x = rand() % 5 + 1;
	int temp1 = 0;
	temp1 = rand() % 5 + 1;
	switch (temp1){
		case 1:
			temp.y = 'a';
			break;
		case 2:
			temp.y = 'b';
			break;
		case 3:
			temp.y = 'c';
			break;
		case 4:
			temp.y = 'd';
			break;
		case 5:
			temp.y = 'e';
			break;
	}
	return temp;
}

location fire(){
	location temp;
	int num;
	char inChar;
	cout << "Pick a location to fire upon:" << endl;
	cin >> num >> inChar;
	temp.x = num;
	temp.y = inChar;
	return temp;
}

//Prints Coordinates of the ship functions
void printShip(ship temp){
	cout << "X Location:" << temp.loc.x << " Y Location:" << temp.loc.y << endl;
	if (temp.sunk == false)
		cout << "Not Sunk" << endl;
	if (temp.sunk == true)
		cout << "Sunk" << endl;
}

//Checks for Matching
bool match(ship temp, location myspot){
	if (temp.loc.x == myspot.x && temp.loc.y == myspot.y)
		return true;
	else
		return false;
}
//Sink Function
void sink(ship& temp){
	temp.sunk = true;
}
//Initalizes array to -1
void initalize(ship ships[]){
	for (int i = 0; i < FLEET_SIZE; i++){
		ships[i].loc.x = -1;
		ships[i].loc.y = -1;
	}
}
*/


// function Definitions for battleship game
//William Komer
//3-25-15

#include "battleship.h"
#include <iostream>

using namespace std;

// Selects the Locations
location pick(){
	location temp;
	int temp2;
	temp.x = rand() % 5 + 1;
	temp2 = rand() % 5 + 1;
	switch (temp2){
	case 1:
		temp.y = 'a';
		break;
	case 2:
		temp.y = 'b';
		break;
	case 3:
		temp.y = 'c';
		break;
	case 4:
		temp.y = 'd';
		break;
	case 5:
		temp.y = 'e';
		break;
	};
	return temp;
};
//Fire on location function
location fire(){
	location temp;
	int num;
	char inChar;
	cout << "Pick a spot to fire at(ex 5 a)" << endl;
	cin >> num >> inChar;
	temp.x = num;
	temp.y = inChar;
	return temp;
}
//Prints the Coordinates of the ship
void printShip(ship temp){
	cout << " X Coordinate= " << temp.loc.x << " Y Coordinate= " << temp.loc.y;
	if (temp.sunk == false)
		cout << "Not Sunk" << endl;
	if (temp.sunk == true)
		cout << "Sunk" << endl;
}
////checks to see if match
bool match(ship temp, location temptwo){
	if (temp.loc.x == temptwo.x && temp.loc.y == temp.loc.y)
		return true;
	else
		return false;
}
//
void sink(ship& it){
	it.sunk == true;
}

bool operational(const ship ships[]){
	for (int p = 0; p < FLEET_SIZE; p++){
		if (ships[p].sunk == true)
			return false;
	}
	return true;
}
//initalizes the ships to -1,-1
void initialize(ship ships[]){
	for (int i = 0; i < FLEET_SIZE; i++){
		ships[i].loc.x = -1;
		ships[i].loc.y = -1;
	}
}

int check(const ship ships[], location temploc){
	for (int l = 0; l < FLEET_SIZE; l++){
		if (ships[l].loc.x == temploc.x)
			if (ships[l].loc.y == temploc.y)
				return 1;
	}
	return -1;
}

void deploy(ship ships[]){
	for (int e = 0; e < FLEET_SIZE; e++){
		ships[e].loc = pick();
	}
}

void printFleet(const ship ships[]){
	for (int a = 0; a < FLEET_SIZE; a++){
		cout << ships[a].loc.x << " " << ships[a].loc.y;
		if (ships[a].sunk == true)
			cout << " sunk" << endl;
		else
			cout << " not sunk" << endl;
	}
}