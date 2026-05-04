
#include<iostream>
using namespace std;


class Student{

public: 
	// data members - variables
	int marks;
	string name;
	string dept;


	// member function
	void detailsOfStudents(){

		cout << "Name of the student: " << name << "\n";
		cout << "Marks of the student: " << marks << "\n";
		cout << "Dept of the student: " << dept << "\n";
		cout << "\n";
	}
};

int main(){

	// access the members of the class - using dot (.) operator
	// nameOfObject.member
		
	// create the object
	Student pramod;

	pramod.name = "Pramod";
	pramod.dept = "CSE";
	pramod.marks = 50;

	pramod.detailsOfStudents();

	Student bhakti;
	bhakti.name = "Bhakti";
	bhakti.marks = 80;
	bhakti.dept = "CSE";

	bhakti.detailsOfStudents();


	cout << "\n";
	return 0; 
}