
#include<iostream>
using namespace std;

int main(){
	
	// declaring array method 1
	int roll[] = {10, 11, 18, 20};
	
	// taking user input in the array
	int marks[5];
	int n = 5; // (0 1 2 3 4)

	for (int i = 0; i < n; i++){
		cin >> marks[i];
	}

	for (int i = 0; i < n; i++){
		cout << marks[i] << " ";
	}



	cout << "\n";
	return 0; 
}

