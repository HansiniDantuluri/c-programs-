#include <iostream>
#include<windows.h>
using namespace std;
int main() {
	string name = "Hansi";
	string *pName = &name;
	cout << pName;
	return 0;
}


