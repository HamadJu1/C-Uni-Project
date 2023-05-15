#include"CommunityMember.h"
#include"Student.h"
#include "Alumnus.h"
#include"Employee.h"
#include"Staff.h"
#include"Faculty.h"
#include"Administrator.h"
#include"Teacher.h"
#include<string>
#include<iostream>

using namespace std;

int main() {

	unsigned  long int d, p;
	string f, l, a, cj, de, sp, ac, po;
	unsigned int hpw = 0, clh = 0, yog = 0;
	double sa = 0, gp = 0;
	int q, ch;

	CommunityMember* a_ptr;

	CommunityMember cm;
	Student stu;
	Alumnus al;
	Employee em;
	Staff st;
	Faculty fa;
	Administrator ad;
	Teacher te;

	cout << "\t Enter How many Members you will add to the program :" << endl;
	cin >> q;
	for (int i = 0;i < q; i++) {
		cout << "\n \t \t Choose what does he do :  \n1-Student \n2-Alumnus \n3-Employee \n4-Staff \n5-Faculty \n6-Administrator \n7-Teacher" << endl;
		cin >> ch;
		if (ch == 1) {
			stu.readdata(555, 6666, f, l, a, gp, clh);
		}
		else if (ch == 2) {
			al.readdata(111, 2222, f, l, a, yog, cj);
		}
		else if (ch == 3) {
			em.readdata(222, 3333, f, l, a, sa);
		}
		else if (ch == 4) {
			st.readdata(3333, 4444, f, l, a, sa, de);
		}
		else if (ch == 5) {
			fa.readdata(3333, 4444, f, l, a, sa, sp, ac);
		}
		else if (ch == 6) {
			ad.readdata(3333, 4444, f, l, a, sa, sp, ac, po);
		}
		else if (ch == 7) {
			te.readdata(3333, 4444, f, l, a, sa, sp, ac, hpw);
		}
		else
			cout << " wrong input " << endl;
	}

	for (int i = 0;i < ch;i++) {
		if (ch == 1) {
			a_ptr = &stu;
			a_ptr->print();
		}
		else if (ch == 2) {
			a_ptr = &al;
			a_ptr->print();
		}
		else if (ch == 3) {
			a_ptr = &em;
			a_ptr->print();
		}
		else if (ch == 4) {
			a_ptr = &st;
			a_ptr->print();
		}
		else if (ch == 5) {
			a_ptr = &fa;
			a_ptr->print();
		}
		else if (ch == 6) {
			a_ptr = &ad;
			a_ptr->print();
		}
		else if (ch == 7) {
			a_ptr = &te;
			a_ptr->print();
		}
		else
			cout << " wrong input " << endl;
	}
	system("puase");
}