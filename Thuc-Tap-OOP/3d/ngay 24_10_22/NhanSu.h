#pragma once
#include<fstream>
#include <string>
#include<sstream>
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
class NhanSu{ 
	protected:
		string Id;
		string Name;
		int Age;
		string Gender;
		string Address;
	public:
		void setId(string="x");
		void setName(string="x");
		void setAge(int=0);
		void setGender(string="x");
		void setAddress(string="x");
		string getId();
		string getName();
		int getAge();
		string getGender();
		string getAddress();
		
};
void NhanSu::setId(string id){this->Id=id;}
void NhanSu::setName(string name){this->Name=name;}
void NhanSu::setAge(int age){this->Age=age;}
void NhanSu::setGender(string gender){this->Gender=gender;}
void NhanSu::setAddress(string address){this->Address=address;}
string NhanSu::getId(){return Id;}
string NhanSu::getName(){return Name;}
int NhanSu::getAge(){return Age;}
string NhanSu::getGender(){return Gender;}
string NhanSu::getAddress(){return Address;}
