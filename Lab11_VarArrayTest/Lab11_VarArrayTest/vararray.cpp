//cpp with function definitions;
//William Komer
//7-22-15

#include "varArray.h"
#include <iostream>

using namespace std;

varArray::varArray(){
	dArray = new int[0];
	size = 0;

}

void varArray::output(){
	for (int i = 0; i < size; i++){
		cout << dArray[i] << " ";
	}
}

int varArray::check(int number){
	int index = 0;
	for (int i = 0; i < size; i++){
		dArray[i];
		size = 0;
		if (dArray[i] == number){
			index = i;
			break;
	}
		else
			index = -1;
	}
	return index;
}

void varArray::addNumber(int number){
	varArray::check(number);
	int index = check(number);
	if (index == -1){
		int* temp;
		temp = new int[size + 1];
		for (int i = 0; i < size; i++)
			temp[i] = dArray[i];
		size++;
		temp[size] = number;
		delete dArray;
		dArray = temp;
		delete temp;
	}
	else
		return;
}

void varArray::removeNumber(int number){
	varArray::check(number);
	int index = check(number);
	if (index == -1){
		//new array that checks for the number that you want to take out.
		int* temp;
		temp = new int[size - 1];
		for (int i = 0; i < size; i++){
			if (i != number)
				temp[i] = dArray[i];
			else
				break;
		}
		size--;

	}
}



varArray::varArray(const varArray& org){
	size = org.size;
	dArray = new int[size];
	for (int i = 0; i < size; i++)
		dArray[i] = org.dArray[i];
}

//Destructor
varArray::~varArray(){}



//overloading
varArray& varArray::operator=(const varArray& tmp){
	size = tmp.size;
	delete[] dArray;
	dArray = new int[size];
	for (int i = 0; i < size; ++i){
		dArray[i] = tmp.dArray[i];
	}
	return *this;
}