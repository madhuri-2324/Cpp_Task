#ifndef CLASS4_H
#define CLASS4_H
#include "class1.h"
#include "class2.h"
#include<string.h>
using namespace std;

class Employee:protected Person,protected Organization						//Multiple Inheritance
{
	public:
		int var;

		char e_mail[50];
		int e_id,salary1=50000,salary2=40000;
		
		void domain();									//function overloading
			
		void domain(int var);					//function overloading by diffrent parameter
			
		void display();

		void salary();
};
#endif
