#ifndef CLASS2_H
#define CLASS2_H
#include<string.h>
using namespace std;
class Person													//class defination
{
	protected:												// accessible to itself and child class
		char p_name[15];
		char addr[25];

		void getInfo();
       
		void display();											// function declaration
};
#endif
