#ifndef PERSON_H
#define PERSON_H
#include<string.h>
using namespace std;
class Person
{
	protected:
		char p_name[15];
		char addr[25];

		void getInfo();
       
		void display();
};
#endif
