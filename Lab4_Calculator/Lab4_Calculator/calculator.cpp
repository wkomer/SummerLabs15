// Uses predefined functions to create a calulator out of cmath lib
//William Komer
//6-22-15

#include <iostream>
#include <cmath>

using std::cout; using std::cin; using std::endl;

int main(){
	int choice = 0;
	double num, ans;
	do{
		cout << "1. Square Root\n2.Ceiling\n3.Power\n4.Hypot\nSelect an Operation: ";
		cin >> choice;

		switch (choice){
		case 1:
			//Square Root
			cout << "Number to Root:";
			cin >> num;
			ans = sqrt(num);
			cout <<"The Result is:" << ans << endl;
			break;

		case 2:
			//Ceiling
			cout << "Enter Number to be Rounded: ";
			cin >> num;
			ans = ceil(num);
			cout << ans;
			break;
		case 3:
			// Power
			cout << "Enter Base Number :";
			cin >> num;
			cout << "Enter in Power:";
			int power;
			cin >> power;
			ans = pow(num, power);
			cout << ans;
			break;
		case 4:
			//hypot
			cout << "Enter in a X:";
			cin >> num;
			cout << "Enter in a y:";
			double y;
			cin >> y;
			ans = hypot(num, y);
			cout << ans;
		}

		cout << endl;
	} while (choice == 1 || choice == 2 || choice == 3 || choice == 4);
}