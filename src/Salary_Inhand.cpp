#include<iostream>
#include "Organization.h"
#include "Person.h"
#include "Employee.h"
#include "Salary_Inhand.h"
using namespace std;
extern int var;

Salary_Inhand::Salary_Inhand()							//Parameterised Constructor
{

}

Salary_Inhand::Salary_Inhand(int x)							//Parameterised Constructor
{
	Salary = x;
}
			
Salary_Inhand::Salary_Inhand(float y)						   	//Parameterised Constructor
{
	Pf = y;
}

void Salary_Inhand::pf(int z)
{
	if(z >=1 && z <= 250)
	{
		pf1 = (salary1/100)*12;
		Pf =pf1;
		Salary =salary1;
	}
	else if(z >= 251 && z <= 500)
	{
		pf2 = (salary2/100)*12;
		Pf =pf2;
		Salary =salary2;
	}
	else
	{
		Pf = 0;
		Salary = 0;
	}
}

Salary_Inhand operator -(Salary_Inhand& s,Salary_Inhand& s1)					//Operator Overloading
{
	Salary_Inhand res(0);
	res.inHand = s.Salary - s1.Pf;
	return res;
}

void Salary_Inhand::print(int var1)
{
	Salary_Inhand::pf(var1);
	
	cout<<"In-Hand Salary is : "<<(Salary-Pf)<<endl;
}
		

