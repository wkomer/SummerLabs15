//Function Definitions for functions.cpp
//William Komer
//6-28-15

#include <iostream>

using std::cout; using std::cin; using std::endl;

void solidsquare(int size){
	for (int r = 0; r < size; r++){
		for (int c = 0; c < size; c++)
			cout << "*";
		cout << endl;
	}
}

void  hollowSquare(int size){
for (int r = 0; r < size; r++){
	for (int c = 0; c < size; c++){
		if (r == 0)
			cout << "*";
		else if (r == size - 1)
			cout << "*";
		else if (c == 0)
			cout << "*";
		else if (c == size - 1)
			cout << "*";
		else
			cout << " ";
	}
	cout << endl;
  }
};

void triangle(int size){
	int count = 0;
for (int r = 0; r < size; r++){
	count++;
	for (int c = 0; c < count; c++){
		cout << "*";
	}
	cout << endl;
 }
};

void revTriangle(int size){
	int count = size-1;
for (int r = 0; r < size; r++){

	for (int c = 0; c < size; c++){
		if (c < count)
			cout << " ";
		else
			cout << "*";
	}

	count--;
	cout << endl;
 }
};