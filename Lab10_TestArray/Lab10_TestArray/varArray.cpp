//Functions for testArray Project
//William Komer
//7-20-15

#include <iostream>
#include "varArray.h"

using std::cout; using std::cin; using std::endl;

void output(int *arrayPtr, int size){
	for (int i = 0; i < size; i++){
		cout << arrayPtr[i] << " ";
	}
	cout << endl;
};

int check(int *arrayPtr, int number, int size){
	for (int i = 0; i < size; i++){
		if (number == arrayPtr[i]){
			return i + 1;
		}
	}
	return -1;
};

void addNumber(int *& arrayPtr, int number, int &size){
	int tmp;
	for (int i = 0; i < size; i++){
		if (number == arrayPtr[i])
			return;
		else
			 tmp = 1;
	}
	if (tmp == 1){
		int *temp = new int[size + 1];
		for (int i = 0; i < size; i++){
			temp[i] = arrayPtr[i];
		}
		
		temp[size] = number;
		delete[] arrayPtr;
		arrayPtr = temp;
		++size;
	}
};

void removeNumber(int *& arrayPtr, int number, int &size){
	bool found = false;
	int *temp2 = new int[size - 1];
	for (int i = 0; i < size; i++){
		if (arrayPtr[i] == number){
			found = true;
		}
		else if (found == false && arrayPtr[i] != number){
			temp2[i] = arrayPtr[i];
		
		}
		else {
			temp2[i - 1] = arrayPtr[i];

		}

	}
	delete[] arrayPtr;
	arrayPtr = temp2;
	--size;
};
