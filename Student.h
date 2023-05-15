#pragma once
#include"CommunityMember.h"

class Student : public CommunityMember {

public:

	Student() {
		gpa = 0;
		courseloadhours = 0;
	}
	Student(unsigned  long int id1, unsigned  long int phone1, string firstname1, string lastname1, string address1, double gpa1, unsigned int courseloadhours1)
		:CommunityMember(id1, phone1, firstname1, lastname1, address1) {
		gpa = gpa1;
		courseloadhours = courseloadhours1;
	}
	void setdata(unsigned  long int id1, unsigned  long int phone1,
		string firstname1, string lastname1, string address1, double gpa1, unsigned int courseloadhours1) {
		CommunityMember::setdata(id1, phone1, firstname1, lastname1, address1);
		gpa = gpa1;
		courseloadhours = courseloadhours1;
	}
	void readdata(unsigned  long int id1, unsigned  long int phone1, string firstname1, string lastname1, string address1, double gpa1, unsigned int courseloadhours1) {
		CommunityMember::readdata(id1, phone1, firstname1, lastname1, address1);
		cout << " GPA              = " << endl;
		cin >> gpa;
		cout << "Course load hours = ";
		cin >> courseloadhours;
	}
	void setgpa(double gpa1) {
		gpa = gpa1;
	}
	double getgpa() {
		return gpa;
	}
	void setcourseloadhours(unsigned int courseloadhours1) {
		courseloadhours = courseloadhours1;
	}
	unsigned int getcourseloadhours() {
		return courseloadhours;
	}
	void print() {
		CommunityMember::print();
		cout << " GPA               = " << gpa << endl;
		cout << " Course load hours = " << courseloadhours << endl;
	}
private:
	double gpa;
	unsigned int courseloadhours;

	};