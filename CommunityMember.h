#pragma once
#include<iostream>
#include<string>

using namespace std;

class CommunityMember {
public:
	CommunityMember() {
		firstname = "";
		lastname = "";
		address = "";
		id = phone = 0;
	}
	CommunityMember(unsigned  long int id1, unsigned  long int phone1, string firstname1, string lastname1, string address1) {

		id = id1;
		phone = phone1;
		firstname = firstname1;
		lastname = lastname1;
		address = address1;
	}
	void setdata(unsigned  long int id1, unsigned  long int phone1, string firstname1, string lastname1, string address1) {
		
		id = id1;
		phone = phone1;
		firstname = firstname1;
		lastname = lastname1;
		address = address1;
	}
	virtual void readdata(unsigned  long int id1, unsigned  long int phone1, string firstname1, string lastname1, string address1) {

		id = id1;
		phone = phone1;
		firstname = firstname1;
		lastname = lastname1;
		address = address1;

		cout << "ID : " << endl;
		cin >> id;
		cout << "Phone number : " << endl;
		cin >> phone;
		cout << "First Name   : " << endl;
		cin >> firstname;
		cout << "Last name    : " << endl;
		cin >> lastname;
		cout << "Address      :" << endl;
		cin >> address;
	}
	void setid(unsigned  long int id1) {
		id = id1;
	}
	unsigned  long int getid() {
		return id;
	}
	void setphone(unsigned  long int phone1) {
		phone = phone1;
	}
	unsigned  long int getphone() {
		return phone;
	}
	void setfirstname(string firstname1) {
		firstname = firstname1;
	}
	string getfirstname() {
		return firstname;
	}
	void setlastname(string lastname1) {
		lastname = lastname1;
	}
	string getlastname() {
		return lastname;
	}
	void setaddress(string address1) {
		address = address1;
	}
	string getaddress() {
		return address;
	}

	 virtual void print() {
		cout << " First name : \t" << firstname << endl;
		cout << "  Last name : \t" << lastname << endl;
		cout << "         ID :\t" << id << endl;
		cout << "      Phone : \t " << phone << endl;
		cout << "    Address : \t" << address << endl;
	}

protected:
	unsigned  long int id, phone;
	string firstname, lastname, address;

};