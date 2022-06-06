#ifndef CLASS5_H
#define CLASS5_H
#include<string.h>
#include "class2.h"
#include "class3.h"
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
