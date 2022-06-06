#ifndef SALARY_INHAND_H
#define SALARY_INHAND_H
#include<string.h>

using namespace std;
extern int var;

class Salary_Inhand :public Employee
{
	public :
		int var1;
		int salary1=50000,salary2=40000,Salary=0,inHand=0;
		float pf1=0,pf2=0,Pf=0;

		Salary_Inhand();
	
		Salary_Inhand(int);						   //Parameterised Constructor
			
		Salary_Inhand(float);							//Parameterised Constructor
						   	
		void pf(int);

		friend Salary_Inhand operator -(Salary_Inhand& ,Salary_Inhand&);	//Operator Overloading
		
		void print(int);
};
#endif
