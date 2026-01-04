#include <iostream>
using namespace std;

int main(){
	
int row;
int column;
char symbol;
cout << "enter no of rows :";
cin >> row;
cout << "enter no of columns :";
cin >> column;
cout << "enter a symbol :";
cin >> symbol;

	for(int i = 1; i <= row; i++){
		for(int j = 1; j <= column; j++){
			cout << symbol << ' ';
		}
		cout << endl; // or "\n" can also be used instead of endl
	}
}
