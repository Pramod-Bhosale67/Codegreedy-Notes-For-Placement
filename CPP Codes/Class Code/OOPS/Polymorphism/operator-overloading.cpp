

//  Operator overloading

#include<iostream>
using namespace std;

class Math{

public: 
	int x;
	int y;


	// obj1 value's will be passed to the constructor
	Math (int x = 0, int y = 0){
		this -> x = x;
		this -> y = y;
	}

	// Math(){}

	Math operator + (Math &obj2){

		int newX = x + obj2.x;
		int newY = y + obj2.y; 

		Math ans;
		cout << ans.x << " " << ans.y;


		ans.x = newX;
		ans.y = newY;
		return ans;
	}


};

int main(){

	
	Math obj1(10, 10);
	Math obj2(30, 30);

	Math ans = obj1 + obj2;
	cout << "\nAnswer after addition of two objects\n";
	cout << ans.x << " " << ans.y;
















	cout << "\n";
	return 0; 
}