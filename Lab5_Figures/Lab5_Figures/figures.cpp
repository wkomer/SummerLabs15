//Attempts to make figures with for loops
//William Komer
//6-18-15

#include <iostream>
#include "figures.h"

using std::cout; using std::cin; using std::endl;

void solidsquare(int);
void hollowSquare(int);
void triangle(int);
void revTriangle(int);

int main(){
	//Input and output for functions;
	cout << "1.Square\n2.Triangle\n3.Reverse Triangle\n";
	cout << "Select a Figure:";
	int fig;
	cin >> fig;
	cout << "Select Size:";
	int size;
	cin >> size;
	//square filled and hollow
	if (fig == 1){
		cout << "Filled or Hollow (f/h):";
		char cho;
		cin >> cho;
		
		if (cho == 'f')
			solidsquare(size);
		else if (cho == 'h')
			hollowSquare(size);
	}
	//triangle func
	else if (fig == 2)
		triangle(size);
	//reverse Triangle
	else if (fig == 3)
		revTriangle(size);
	
}