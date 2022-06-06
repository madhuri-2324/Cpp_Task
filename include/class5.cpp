#include <iostream>
#include "class2.h"
#include "class3.h"
#include "class5.h"
using namespace std;

void Intern::get_info()									
{
	Person::getInfo();
	cout<<"Enter college name : ";
	cin.getline(clg_name,50);
	cout<<"\n\t\t Enter marks of 5 subjects \n";
	for(int i=0;i<5;i++)
	{
		cout<<"Subject "<<i+1<<" :";
		cin>>marks[i];
		if(marks[i]>100)
		{
			i--;
			cout<<"\nEnter correct marks!!\n";
		}
		else
		{
			cout<<endl;
			sum += marks[i];
			per = (sum/5);
		}
	}
}

void Intern::display()
{
	Person::display();			//Override method(scope resolution) 
	cout<<"Your college name : "<<clg_name<<endl;
	cout<<"Your score out of 500 = "<<sum<<endl;
	cout<<"\nYour percentage is : "<<per;
}


