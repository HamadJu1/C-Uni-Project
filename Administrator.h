#pragma once
#include "Faculty.h"


class Administrator : public Faculty {
public : 

	Administrator(){
		position = "";
	}


	Administrator(unsigned  long int id1, unsigned  long int phone1, string firstname1, string lastname1, string address1, double salary1, string specialty1, string academicrank1, string position1)
		:Faculty(id1, phone1, firstname1, lastname1, address1, salary1,specialty1, academicrank1) {

		id = id1;
		phone = phone1;
		firstname = firstname1;
		lastname = lastname1;
		address = address1;
		salary = salary1;
		specialty = specialty1;
		academicrank = academicrank1;
		position = position1;

     }

	void setdata(unsigned  long int id1, unsigned  long int phone1, string firstname1, string lastname1, string address1, double salary1, string specialty1, string academicrank1, string position1) {
		Faculty::setdata(id1, phone1, firstname1, lastname1, address1, salary1, specialty1, academicrank1);

		id = id1;
		phone = phone1;
		firstname = firstname1;
		lastname = lastname1;
		address = address1;
		salary = salary1;
		specialty = specialty1;
		academicrank = academicrank1;
		position = position1;

	}
	void readdata(unsigned  long int id1, unsigned  long int phone1, string firstname1, string lastname1, string address1, double salary1, string specialty1, string academicrank1, string position1) {
		Faculty::readdata(id1, phone1, firstname1, lastname1, address1, salary1, specialty1, academicrank1);
		cout << " Enter the Position :" << endl;
		cin >> position;
	}
	void setposition(string position1) {
		position = position1;
	}
	string getposition() {
		return position;
	}
	void print() {
		Faculty::print();
		cout << "Position : \t" << position << endl;
	}

private : 
	string position;
};
