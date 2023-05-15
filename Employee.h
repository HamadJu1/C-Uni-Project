#pragma once
#include"CommunityMember.h"

class Employee : public CommunityMember {

public: 

	Employee(){
		salary = 0;
	}
		Employee(unsigned  long int id1, unsigned  long int phone1, string firstname1, string lastname1, string address1, double salary1) {
       
		id = id1;
		phone = phone1;
		firstname = firstname1;
		lastname = lastname1;
		address = address1;
		salary = salary1;
	}

		void setdata(unsigned  long int id1, unsigned  long int phone1, string firstname1, string lastname1, string address1, double salary1) {

			CommunityMember::setdata(id1, phone1, firstname1, lastname1, address1);

			id = id1;
			phone = phone1;
			firstname = firstname1;
			lastname = lastname1;
			address = address1;
			salary = salary1;

   }
		virtual void readdata(unsigned  long int id1, unsigned  long int phone1, string firstname1, string lastname1, string address1, double salary1){
			CommunityMember::readdata(id1, phone1, firstname1, lastname1, address1);

			cout << "Salary : " << endl;
			cin >> salary;
		}

		void setsalary(double salary1) {
			salary = salary1;
		}
		double getsalary() {
			return salary;
		}

		virtual void print() {
			CommunityMember::print();

			cout << " salary : " << salary;
		}
protected : 
	double salary;
};