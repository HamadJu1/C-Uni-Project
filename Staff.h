#pragma once
#include"Employee.h"

class Staff : public Employee {

public : 

	Staff(){
		department = "";
	}

	Staff(unsigned  long int id1, unsigned  long int phone1, string firstname1, string lastname1, string address1,double salary1, string department1)
		:Employee(id1, phone1, firstname1,lastname1,address1,salary1) {
		
		id = id1;
		phone = phone1;
		firstname = firstname1;
		lastname = lastname1;
		address = address1;
		salary = salary1;
		department = department1;
	}

	void setdata(unsigned  long int id1, unsigned  long int phone1,	string firstname1, string lastname1, string address1,double salary1, string department1) {
		Employee::setdata(id1, phone1, firstname1, lastname1, address1, salary1);
		id = id1;
		phone = phone1;
		firstname = firstname1;
		lastname = lastname1;
		address = address1;
		salary = salary1;
		department = department1;
	}

	void readdata(unsigned  long int id1, unsigned  long int phone1, string firstname1, string lastname1, string address1, double salary1,string department1) {
		Employee::readdata(id1, phone1, firstname1, lastname1, address1, salary1);
		cout << " Department = " << endl;
		cin >> department;
	
	}
	void setdepartment(string department1) {
		department = department1;

	}

	string getdepartment() {
		return department;
	}
	
	void print() {
		Employee::print();
		cout << "Department = " << department << endl;
	}

private:
	string department;

};