#include <iostream>
using namespace std;

int main() {
	int number;
	cout << "enter a positive no :";
	cin >> number;
	
	while(number < 0)
	{
		cout << "invalid input try again : ";
		cin >> number;
	}
	
	cout << "positive number successfully entered which is :" << number;
}
