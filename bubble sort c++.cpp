#include <iostream>
using namespace std;

int main() {
	int size = 5;
	int arr[size];
	for(int i=0; i < size; i++)
	{
	cout << "enter a number : "; 
	cin >> arr[i];
	}

    int i = 0;
    int last_index = 4;
	int temp = 0;
	for(int i = 0; i = last_index; i++)
	{
	  if (arr[i] > arr[i+1])
	   {
		temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
	   }
	}
	last_index = last_index - 1;
	
	for(int i=0; i < size; i++)
	{
	cout << arr[i]; 
	}
	return 0;
	
}

