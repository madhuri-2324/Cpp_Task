#include<iostream>
#include "class2.h"
using namespace std;

void Person::getInfo()
{
	char dump;
	cout<<"Enter your name : ";   
	dump = getchar();
	cin.getline(p_name,15);
	cout<<"Enter your address : ";
	cin.getline(addr,25);
}

void Person::display()
{
	cout<<"Name : "<<p_name<<endl;
	cout<<"Address : "<<addr<<endl;
}

