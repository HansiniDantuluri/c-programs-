#include <iostream>
using namespace std;

int main() {
	double rainfall[5];
	
	rainfall[0] = 2.3;
	rainfall[1] = 4.3;
	rainfall[2] = 2.5;
	rainfall[3] = 6.3;
	rainfall[4] = 3.3;
	
	for(int i = 0; i < 5; i++)
	{
		cout << rainfall[i] << endl;
	}
}

