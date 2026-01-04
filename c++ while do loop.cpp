#include <iostream>
using namespace std;

int main() {
	int number;
	
	do{
		cout << "enter a positive no : ";
		cin >> number;
	}while(number < 0); // loop continues until condition becomes false in this case when a positive no is entered.
	
	cout << "positive number successfully entered which is :" << number;
}
