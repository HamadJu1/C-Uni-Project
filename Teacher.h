#pragma once
#include "Faculty.h"


class Teacher : public Faculty {
public:

	Teacher(){
		hoursperweek = 0;
	}

	Teacher(unsigned  long int id1, unsigned  long int phone1, string firstname1, string lastname1, string address1, double salary1, string specialty1, string academicrank1, unsigned int hoursperweek1)
		:Faculty(id1, phone1, firstname1, lastname1, address1, salary1, specialty1, academicrank1) {

		id = id1;
		phone = phone1;
		firstname = firstname1;
		lastname = lastname1;
		address = address1;
		salary = salary1;
		specialty = specialty1;
		academicrank = academicrank1;
		hoursperweek = hoursperweek1;
	}

	void setdata(unsigned  long int id1, unsigned  long int phone1, string firstname1, string lastname1, string address1, double salary1, string specialty1, string academicrank1, unsigned int hoursperweek1) {
		Faculty::setdata(id1, phone1, firstname1, lastname1, address1, salary1, specialty1, academicrank1);

		id = id1;
		phone = phone1;
		firstname = firstname1;
		lastname = lastname1;
		address = address1;
		salary = salary1;
		specialty = specialty1;
		academicrank = academicrank1;
		hoursperweek = hoursperweek1;

	}
	void readdata(unsigned  long int id1, unsigned  long int phone1, string firstname1, string lastname1, string address1, double salary1, string specialty1, string academicrank1,unsigned int hoursperweek1) {
		Faculty::readdata(id1, phone1, firstname1, lastname1, address1, salary1, specialty1, academicrank1);
		cout << " Hours per week:" << endl;
		cin >> hoursperweek;
	}
	void sethoursperweek(unsigned int hoursperweek1) {
		hoursperweek = hoursperweek1;
	}
	unsigned int gethoursperweek() {
		return hoursperweek;
	}
	void print() {
		Faculty::print();
		cout << "Hours per week : \t" << hoursperweek << endl;
	}

private:
	unsigned int hoursperweek;
};
