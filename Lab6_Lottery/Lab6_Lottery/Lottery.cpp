//Lottery Game using arrays
//william komer
//6-30-15

#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

void initalize(int [],int);
void draw(int, int[],int);
void entry(int);
void check(int[], int, int);
void printOut(int[],int);

int main(){
	srand(time(NULL));
	int a[10], pick = 0, uent = 0, asize = 10;

	initalize(a,asize);
	draw(pick, a,asize);
	entry(uent);
	cin >> uent;
	check(a, uent,asize);
	printOut(a,asize);

}

void initalize(int a[],int asize){
	for (int i = 0; i < asize; ++i)
		a[i] = -1;
}

void draw(int pick, int a[],int asize){
	int temp = 0;
	for (int i = 0; i < asize; ++i){
		pick = rand() % 100;
		//checking the whole array
		for (int j = 0; j < asize; ++j){
			if (a[j] == pick){
				temp = 1;
				break;
			}
			else {
				temp = 0;
			}
		}

		if (temp == 0){
			a[i] = pick;
		}
		else if (temp == 1){
			i--;
			continue;
		}
	}

}
		
void entry(int uent){
	cout << "enter in a number to see if you won the lottery: ";
}

void check(int a[], int uent, int asize){
	int temp = 0;
	for (int i = 0; i < asize; ++i){
		if (a[i] == uent){
			temp++;
		}
	}

	if (temp > 0){
		cout << "You Have Won!!!" << temp << " Numbers matched!" << endl;
	}
	else{
		cout << "You didnt match any numbers!" << endl;
	}
}

void printOut(int a[],int asize){
	for (int i = 0; i < asize;++i){
		cout << a[i] << " ";
	}
	cout << endl;
}

