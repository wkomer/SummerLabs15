//Functions for main
//William Komer
//7-27-15

#include <iostream>
#include <vector>
#include"header.h"
#include <algorithm>

using std::cout; using std::cin; using std::endl; using std::vector;

//adds a number to the vector usng pushback
void add(int number, vector<int>& dynArray){
	dynArray.push_back(number);

}
//iterates through the vector
void sub(int number, vector<int>& dynArray){
	vector<int>::iterator toRemove = dynArray.begin();
	for (vector<int>::iterator ip = toRemove; ip != dynArray.end(); ++ip){
		if (*ip == number)
			toRemove = ip;
	}
	dynArray.erase(toRemove);
}

//outputs the vector
void output(vector<int> dynArray){
	cout << "Your Numbers:";
	sort(dynArray.begin(), dynArray.end());
	for (vector<int>::iterator ip = dynArray.begin();
		ip != dynArray.end(); ++ip){
		cout << *ip << " ";
	}
	cout << endl;
}