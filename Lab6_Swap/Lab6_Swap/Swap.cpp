//Number sort with functions.
//William Komer
//6-30-15

#include <iostream>

using std::cout; using std::cin; using std::endl;
//void funcitons for the swap functions

void getNum(int&,int&,int&);
void swap1(int&,int&);
void swap2(int&,int&);
void swap3(int&,int&);
void printNum(int&,int&,int&);

int main(){
	int one, two, three;

	getNum(one, two, three);
	if (three < two)
		swap1(three, two);
	if (three < one)
		swap2(three, one);
	if (two < one)
		swap3(two, one);
	printNum(one, two, three);

}

void getNum(int& one, int& two, int& three){
	cout << "Enter in three numbers to be swapped into numerical order:";
	cin >> one >> two >> three;
}

void swap1(int& three, int& two){
	int temp = three;
	three = two;
	two = temp;
}

void swap2(int& three, int& one){
	int temp = three;
	three = one;
	one = temp;
}

void swap3(int& two, int& one){
	int temp = two;
	two = one;
	one = temp;
}

void printNum(int& one, int& two, int& three){
	cout << one << two << three << endl;
}