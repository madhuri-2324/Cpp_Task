#include<iostream>
#include "Organization.h"
#include "Person.h"
#include "Employee.h"
using namespace std;
		
void Employee::domain()								//function overloading
{
	char dump;
	Person::getInfo();
	Organization::getInfo();
	cout<<"Enter Employee mail id : ";
	dump = getchar();
	cin.getline(e_mail,50);	
	cout<<"Enter employee id : ";
	cin>>e_id;
	var=e_id;
}
			
void Employee::domain(int var)				//function overloading by diffrent parameter
{
	var = e_id;
	if(var>=1 && var<=250)
	{
		cout<<"\nDomain - Digital\n";
	}
	else if(var>=251 && var<=500)
	{
		cout<<"\nDomain - Embedded\n";
	}
	else
		cout<<"\nInvalid Employee id\n";
}			

void Employee::display()
{
	Person::display();						//method Override of base class
	Organization::display();
	cout<<"The Employee mail id : "<<e_mail<<endl;
	cout<<"\n\n";
}

void Employee::salary()
{
	if(var >=1 && var <= 250)
	{
	    	cout<<"\nSalary is : "<<salary1;
		Employee::domain(var);
	}
	else if(var >= 251 && var <= 500)
	{
		cout<<"\nSalary is : "<<salary2;
		Employee::domain(var);
	}
	else
	{
		cout<<"\nInvalid Employee Id\n";
	}
}

