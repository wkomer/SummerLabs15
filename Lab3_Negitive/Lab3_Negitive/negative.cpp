// Prints number of negative numbers and sum
//William Komer
//6-18-15

#include <iostream>

using std::cout; using std::cin; using std::endl;

int main(){

	cout << "Input a set of numbers: ";
	//initalizes Integers to keep track of numbers being used.
	int num, count = 0;
	int sum = 0;
	//Runs code while number is not 0
	do{
		cin >> num;

		if (num < 0){
			count++;
			sum += num;
		}
	} 
	while (num != 0);
	
	cout << "A total of " << count << " negative numbers\n";
	cout << "The sum of negative numbers is " << sum << endl;


}
