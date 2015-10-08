//VarArray Program Part 2 Lab 10
//William Komer
//7-20-15

#include <iostream>
#include "VarArray.h"

using std::cout; using std::cin; using std::endl;



int main(){
	char in;
	int num, size = 0;
	//initalizes the array
	int *vArray = new int[0];

	do{
		cout << "enter Operation(a/r/q) and Number:";
		cin >> in;
		if (in == 'a'){
			cin >> num;
			addNum(vArray, num, size);
		}

		if (in == 'r'){
			cin >> num;
			removeNum(vArray, num, size);
		}

		if (in != 'q')
			output(vArray, size);
	} 
	while (in != 'q');
}

void output(int *vArray, int size){
	cout << "Your Numbers: ";
	for (int i = 0; i < size; i++){
		cout << vArray[i] << " ";
	}
	cout << endl;
}

void addNum(int *& vArray, int num, int &size){
	int tmp = -1;
	for (int i = 0; i <= size; i++){
		if (num == vArray[i])
			return;
		else
			tmp = 1;
	}
	if (tmp == 1){
		int *temp = new int[size + 1];
		for (int i = 0; i < size; i++){
			temp[i] = vArray[i];
		}

		temp[size] = num;
		delete[] vArray;
		vArray = temp;
		++size;
	}
};

void removeNum(int *& vArray, int num, int &size){
	bool found = false;
	int tmp;
	//int *temp2 = new int[size - 1];
	for (int i = 0; i < size; i++){
		if (vArray[i] == num){
			found = true;
			tmp = i;
		}
	}

	if (found == true){
		--size;
		int *temp2 = new int[size];
		for (int i = 0; i <= size; i++){
			if (vArray[i] != num){
				if (i >= num)
					temp2[i - 1] = vArray[i];
				else 
					temp2[i] = vArray[i];

			}
		}
		delete[]vArray;
		vArray = temp2;
	}

}

