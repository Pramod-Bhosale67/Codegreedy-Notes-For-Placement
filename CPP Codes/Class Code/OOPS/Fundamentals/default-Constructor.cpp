
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

	// constructor - default value
	// default constructor
	Student(){
		marks = 80;
		name = "Pramod";
		dept = "CSE";
		year = 4;
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
	Student pramod;
	pramod.detailsOfStudents();

	Student sara;
	sara.detailsOfStudents();

	Student gaurav;
	gaurav.detailsOfStudents();











	cout << "\n";
	return 0; 
}