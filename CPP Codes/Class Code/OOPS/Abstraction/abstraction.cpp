
#include<iostream>
using namespace std;


class Person{

// hiding the internal implementation
private:
	int age;
	string name;

public:

	Person(int age, string name){
		this -> name = name;
		this -> age = age;
	}
// showing only necessary things
	void details(){
		cout << "Name of the person: " << name << "\n";
		cout << "Age of the person: " << age << "\n";
	}
};


int main(){

	Person pramod(19, "Pramod");
	pramod.details();



	cout << "\n";
	return 0; 
}