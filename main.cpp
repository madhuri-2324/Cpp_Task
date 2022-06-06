#include<iostream>
#include "class1.h"
#include "class2.h"
#include "class3.h"
#include "class4.h"
#include "class5.h"
#include "class6.h"
using namespace std;

int main()
{
	int ch,var1;
	cout<<"\n1.Employee\n2.Intern\n3.Exit\n";
	cout<<"Enter your area : ";
	cin>>ch;
	cout<<endl<<endl;
	switch(ch)
	{
		case 1: 
			{
				Employee e1;
				e1.domain();
				var1 = e1.e_id; 
        			cout<<endl<<endl<<"***************************************Employee Information***************************************"<<endl;
        			e1.display();
        			e1.salary();
				Salary_Inhand i1;
				Salary_Inhand i2(i2.Salary),i3(i3.Pf);
				i1 = i2 - i3;
				i1.print(var1);
				break;
			}
		case 2:
			{
				Intern i;
				i.get_info();
            			cout<<"\n\n***************************************Intern Information***************************************"<<endl;
            			i.display();
            			cout<<"\n";
				break;	
			}
		case 3:
			break;																										
		default:
			cout<<"\nInvalid Input\n";
			break;
	}
	return 0;
}



