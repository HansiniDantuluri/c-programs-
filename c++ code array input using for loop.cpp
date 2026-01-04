#include <iostream>
using namespace std;

int main() {
	double rainfall[5];
	for(int i = 0; i < 5; i++)
	{
		cout << "enter a value :" << endl;
		cin >> rainfall[i];
	}
	cout << "the values in the array are:" << endl;
	for(int i = 0; i < 5; i++)
	{
		cout << rainfall[i] << endl;
	}
}
