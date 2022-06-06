#ifndef INTERN_H
#define INTERN_H
#include<string.h>
//#include "Person.h"
//#include "Studet.h"
using namespace std;

class Intern:protected Student									//Multilevel Inheritance
{
	public:
   		char clg_name[50];
		int marks[5],sum=0;
		float per=0;

		void get_info();									

		void display();
};
#endif
