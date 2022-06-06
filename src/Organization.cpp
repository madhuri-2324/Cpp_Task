#include<iostream>
#include "class1.h"
using namespace std;

void Organization::getInfo()									
{
     	cout<<"Enter the company name : ";
	cin.getline(c_name,20);
	cout<<"Enter location of comapany : ";
	cin.getline(c_addr,25);
	cout<<"Enter distance of company from your location : ";
	cin>>distance;
}
 
void Organization::display()
{
	cout<<"The company name : "<<c_name<<endl;
	cout<<"Location of comapany : "<<c_addr<<endl;
	cout<<"Distance of company from your location : "<<distance<<"(in km)"<<endl;
}
