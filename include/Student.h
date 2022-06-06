#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include<string.h>
using namespace std;
class Student:protected Person									//Single Inheritance
{
	protected:
        	char s_name[15];
		char addr[25];
	       	virtual void get_info();							//method overriding
};
#endif
