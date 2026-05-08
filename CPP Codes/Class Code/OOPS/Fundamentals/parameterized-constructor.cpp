
#include<iostream>
using namespace std;

// default access specifier is private


class Student{

private:
	// data members - variables
	int marks ;
	string name;
	string dept;
	int year;

public:

	// constructor - parameterized constructor

	Student(int m, string n, string d, int y){
		marks = m;
		name = n;
		dept = d;
		year = y;
	}


	// member function
	void detailsOfStudents(){

		cout << "Name of the student: " << name << "\n";
		cout << "Marks of the student: " << marks << "\n";
		cout << "Dept of the student: " << dept << "\n";
		cout << "Year of the student: " << year << "\n";
		cout << "\n";
	}
};



int main(){


	// create the object
	Student pramod(80, "PRAMOD", "CSE", 4);
	pramod.detailsOfStudents();

	Student sara(90, "Sara", "CSE", 2);
	sara.detailsOfStudents();

	Student gaurav(92, "Gaurav", "CSE", 2);
	gaurav.detailsOfStudents();











	cout << "\n";
	return 0; 
}