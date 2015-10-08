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
	cout << endl;
}

int varArray::check(int number){
	int index = 0;
	for (int i = 0; i <= size; ++i){
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
	int tmp = -1;
	for (int i = 0; i <= size; i++){
		if (number == dArray[i])
			return;
		else
			tmp = 1;
	}
	if (tmp == 1){
		int *temp = new int[size + 1];
		for (int i = 0; i < size; i++){
			temp[i] = dArray[i];
		}

		temp[size] = number;
		delete[] dArray;
		dArray = temp;
		++size;
	}
}

void varArray::removeNumber(int number){
	bool found = false;
	int tmp;
	//int *temp2 = new int[size - 1];
	for (int i = 0; i < size; i++){
		if (dArray[i] == number){
			found = true;
			tmp = i;
		}
	}

	if (found == true){
		--size;
		int *temp2 = new int[size];
		for (int i = 0; i <= size; i++){
			if (dArray[i] != number){
				if (i >= number)
					temp2[i - 1] = dArray[i];
				else
					temp2[i] = dArray[i];

			}
		}
		delete[]dArray;
		dArray = temp2;
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