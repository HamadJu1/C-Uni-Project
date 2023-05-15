#pragma once
#include"Employee.h"

class Faculty : public Employee {

public:

	Faculty(){
		specialty = "";
		academicrank = "";
	}

	Faculty(unsigned  long int id1, unsigned  long int phone1, string firstname1, string lastname1, string address1 ,double salary1, string specialty1 , string academicrank1)
		:Employee(id1, phone1, firstname1, lastname1, address1, salary1) {

		id = id1;
		phone = phone1;
		firstname = firstname1;
		lastname = lastname1;
		address = address1;
		salary = salary1;
		specialty = specialty1;
		academicrank = academicrank1;

	}

	void setdata(unsigned  long int id1, unsigned  long int phone1, string firstname1, string lastname1, string address1, double salary1, string specialty1, string academicrank1) {
		Employee::setdata(id1, phone1, firstname1, lastname1, address1, salary1);
		id = id1;
		phone = phone1;
		firstname = firstname1;
		lastname = lastname1;
		address = address1;
		salary = salary1;
		academicrank = academicrank1;
		specialty = specialty1;
	}

	virtual void readdata(unsigned  long int id1, unsigned  long int phone1, string firstname1, string lastname1, string address1, double salary1, string sepcialty1 , string academicrank1) {
		Employee::readdata(id1, phone1, firstname1, lastname1, address1, salary1);
		cout << " Specialty :  " << endl;
		cin >> specialty;
		cout << " Academic Rank : " << endl;
		cin >> academicrank;

	}
	void setspecialty(string specialty1) {
		specialty = specialty1;

	}

	string getspecialty() {
		return specialty;
	}
	void setacademicrank(string academicrank1) {
		academicrank = academicrank1;
	}
	string getacademicrank() {
		return academicrank;
	}
virtual	void print() {
		Employee::print();
		cout << " Specialty     : " << specialty << endl;
		cout << " Academic Rank : " << academicrank << endl;
	}

protected:
	string specialty , academicrank;

};