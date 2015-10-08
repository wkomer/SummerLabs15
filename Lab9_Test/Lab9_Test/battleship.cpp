//Function calls
//William Komer
//7-15-15

#include <iostream>
#include "battleship.h"
#include <ctime>

using std::cout; using std::cin; using std::endl;

location::location(){
	x = -1;
}

void location::pick(){
	//Gives a random location to x and y
	x = rand() % 5 + 1;
	int temp;
	temp = rand() % 5 + 1;
	switch (temp){
	case 1:
		y = 'a';
		break;
	case 2:
		y = 'b';
		break;
	case 3:
		y = 'c';
		break;
	case 4:
		y = 'd';
		break;
	case 5:
		y = 'e';
		break;
	}
}

void location::fire(){
	cout << "Where would like to fire (ex 3 b):" << endl;
	cin >> x >> y;
}

void location::print()const{
	cout << x << y << endl;
}

bool compare(location one,location two){
	if (one.x == two.x && one.y == two.y)
		return true;
	else
		return false;
}

//--SHIP FUNCTIONS--//

ship::ship(){
	sunk = false;
}

bool ship::match(location& userShot) const {
	return compare(loc ,userShot);
}

//bool ship::isSunk()const{return sunk;}

void ship::sink(){
	sunk = true;
}

void ship::setLocation(const location& mySpot){
	loc = mySpot;
}

void ship::printShip()const{
	loc.print();
	if (sunk == true)
		cout << "sunk" << endl;
	else cout << "not Sunk" << endl;
}

//--FLEET CLASSES--//

void fleet::deployFleet(){
	for (int i = 0; i < fleetSize; ++i){
		location tmp;
		tmp.pick();
		ships[i].setLocation(tmp);
	}
}

bool fleet::operational()const{
	for (int i = 0; i < fleetSize; ++i){
		if (ships[i].isSunk() == false)
			return true;
	}
	return false;
}

bool fleet::isHitNSink(location& userShot){
	for (int i = 0; i < fleetSize; ++i){
		if (ships[i].match(userShot) == true){
			ships[i].sink();
			return true;
		}
	}
	return false;
}

void fleet::printFleet()const{
	for (int i = 0; i < fleetSize; ++i)
		ships[i].printShip();
}