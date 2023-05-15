#pragma once
#include"CommunityMember.h"

class Alumnus : public CommunityMember {
private:
	unsigned int yearofgraduation;
	string currentjop;

public:
	Alumnus() {
		currentjop = "";
		yearofgraduation = 0;
	}
	Alumnus(unsigned  long int id1, unsigned  long int phone1, string firstname1, string lastname1, string address1, unsigned int yearofgraduation1 , string currentjop1)
		:CommunityMember(id1, phone1, firstname1, lastname1, address1) {

		yearofgraduation = yearofgraduation1;
		currentjop = currentjop1;
	}
	void setdata(unsigned  long int id1, unsigned  long int phone1, string firstname1, string lastname1, string address1, unsigned int yearofgraduation1,string currentjop1) {
		CommunityMember::setdata(id1, phone1, firstname1, lastname1, address1);

		yearofgraduation = yearofgraduation1;
		currentjop = currentjop1;
	}
	void readdata(unsigned  long int id1, unsigned  long int phone1, string firstname1, string lastname1, string address1, unsigned int yearofgraduation1, string currentjop1){
		CommunityMember::readdata(id1, phone1, firstname1, lastname1, address1);
		cout << " Enter Year of graduation : " << endl;
		cin >> yearofgraduation;
		cout << " Enter Current Jop :" << endl;
		cin >> currentjop;
	}
	void setyearofgraduation(unsigned int yearofgraduation1) {
		yearofgraduation = yearofgraduation1;
	}
	unsigned int getyearofgraduation() {
		return yearofgraduation;
	}
	void setcurrentjop(string currentjop1) {
		currentjop = currentjop1;
	}
	string getcurrentjop() {
		return currentjop;
	}
	void print() {
		CommunityMember::print();
		cout << "Year Of Graduation : \t" << yearofgraduation << endl;
		cout << " Current jop       : \t" << currentjop << endl;
	}
};