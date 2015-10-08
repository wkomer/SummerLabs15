//Main Int
//William Komer
//4-30-15

#include <iostream>
#include <vector>
#include <algorithm>
#include "vectorsoo.h"

using namespace std;

int main(){
	int number;
	char op;
	vectorsoo array;
	do{
		cout << "Enter operation [a,r,q] and number:";
		cin >> op;
		if (op != 'q')
			cin >> number;
		if (op == 'a'){
			array.addNumber(number);
		}
		if (op == 'r'){
			array.removeNumber(number);
		}
		if (op != 'q')
			array.output();
	} while (op != 'q');
}