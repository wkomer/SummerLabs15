//Main cpp
//William Komer
// 7-27-15

#include <iostream>
#include <vector>
#include <algorithm>
#include"header.h"

using std::cout; using std::cin; using std::endl; using std::vector;

int main(){
	int number;
	char op;
	vector<int> dynArray;
	do{
		cout << "Enter operation [a,r,q] and number:";
		cin >> op;
		if (op == 'a'){
			cin >> number;
			add(number, dynArray);
		}
		if (op == 'r'){
			cin >> number;
			sub(number, dynArray);
		}
		if (op != 'q')
			output(dynArray);
	} while (op != 'q');
}