//Test.cpp for var array classes
//William Komer
//7-23-15

#include <iostream>
#include "vararray.h"

using std::cin; using std::cout; using std::endl;

int main(){
	varArray a1;
	char in = 'b';
	int num = 0;
	while (in != 'q'){
		//asks for input
		cout << "choose and operation (a/r/q) and a number:" << endl;
		cin >> in;

		if (in == 'a'){
			cin >> num;
			a1.addNumber(num);
		}

		if (in == 'r'){
			cin >> num;
			a1.removeNumber(num);
		}
		if (in != 'q')
			a1.output();
	}
}