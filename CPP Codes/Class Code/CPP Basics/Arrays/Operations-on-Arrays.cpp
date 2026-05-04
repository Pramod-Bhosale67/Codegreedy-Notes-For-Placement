
#include<iostream>
using namespace std;

int main(){
	
	// declaring array method 1
	int roll[] = {10, 11, 18, 20};
	
	// taking user input in the array
	int marks[5] = {10, 20, 30, 40, 50};
	int n = 5; // (0 1 2 3 4)

	for (int i = 0; i < n; i++){
		cout << marks[i] << " ";
	}

	marks[1] = marks[1] + marks[1];

	cout << "\nUpdated array\n";
	for (int i = 0; i < n; i++){
		cout << marks[i] << " ";
	}

	cout << "\n";
	return 0; 
}

