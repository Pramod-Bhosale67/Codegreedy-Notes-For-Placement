

//  function overloading


#include<iostream>
using namespace std;

class Math{


public:

	void add(int x, int y){
		int ans = (x + y);
		cout << ans << "\n";
	}

	int add(int a, float b){

		return (a + b);
	}

	void add(float y, int a){

		int res = (y + a);
		cout << res;
	}

};

int main(){

	Math math;

	math.add(10, 12);




















	cout << "\n";
	return 0; 
}