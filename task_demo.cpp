#include <iostream>
using namespace std;

class Organization
{
	public:
		char c_name[20];
		char c_addr[25];
		int distance;
   
 		void getInfo()									
		{
        		cout<<"Enter the company name : ";
			cin.getline(c_name,20);
			cout<<"Enter location of comapany : ";
			cin.getline(c_addr,25);
			cout<<"Enter distance of company from your location : ";
			cin>>distance;
    		}
    
		void display()
		{
			cout<<"The company name : "<<c_name<<endl;
			cout<<"Location of comapany : "<<c_addr<<endl;
			cout<<"Distance of company from your location : "<<distance<<"(in km)"<<endl;
		}
};

class Person
{
	public:
		char p_name[15];
		char addr[25];
		void getInfo()
        	{
			char dump;
			cout<<"Enter your name : ";   
			dump = getchar();
			cin.getline(p_name,15);
			cout<<"Enter your address : ";
		 	cin.getline(addr,25);
		}
		void display()
		{
			cout<<"Name : "<<p_name<<endl;
			cout<<"Address : "<<addr<<endl;
		}
};

class Student:public Person									//Single Inheritance
{
	public:
        	char s_name[15];
		char addr[25];
	       	virtual void get_info()								//method overriding
		{
	     		
		}
};

class Employee:public Person,public Organization						//Multiple Inheritance
{
	public:
		char e_mail[50];
		int e_id,salary1=50000,salary2=40000;
		
		void domain()									//function overloading
		{
			char dump;
			Person::getInfo();
			Organization::getInfo();
			cout<<"Enter Employee mail id : ";
			dump = getchar();
			cin.getline(e_mail,50);	
			cout<<"Enter employee id : ";
			cin>>e_id;
		}
			
		void domain(int x)					//function overloading by diffrent parameter
		{
			x=e_id;
			if(x>=1 && x<=250)
			{
				cout<<"\nDomain - Digital\n";
			}
			else if(x>=251 && x<=500)
			{
				cout<<"\nDomain - Embedded\n";
			}
			else
				cout<<"\nInvalid Employee id\n";
		}
			
		void display()
		{
			Person::display();						//method Override of base class
			Organization::display();
			cout<<"The Employee mail id : "<<e_mail<<endl;
			cout<<"\n\n";
		}

		void salary()
		{
			if(e_id >=1 && e_id <= 250)
			{
		    		cout<<"\nSalary is : "<<salary1;
				domain(e_id);
			}
			else if(e_id >= 251 && e_id <= 500)
			{
				cout<<"\nSalary is : "<<salary2;
				domain(e_id);
			}
			else
			{
				cout<<"\nInvalid Employee Id\n";
			}
		}
};

class Intern:public Student									//Multilevel Inheritance
{
	public:
   		char clg_name[50];
		int marks[5],sum=0;
		float per=0;

		void get_info()									
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
					cout<<"\nEnter correct marks!!\n";
					break;
				}
				else
				{
					cout<<endl;
					sum += marks[i];
					per = (sum/5);
				}
			}
		}

		void display()
		{
			Person::display();					//Override method(scope resolution) 
			cout<<"Your college name : "<<clg_name<<endl;
			cout<<"Your score out of 500 = "<<sum<<endl;
			cout<<"\nYour percentage is : "<<per;
		}
};

class Salary_Inhand :public Employee
{
	public :
		int e_id,salary1=50000,salary2=40000,Salary=0,inHand=0;
		float pf1=0,pf2=0,Pf=0;
		Salary_Inhand(int x)						   //Parameterised Constructor
		{
			pf();
			Salary = x;
		}
			
		Salary_Inhand(float y)						   	//Parameterised Constructor
		{
			pf();
			Pf = y;
		}

		void pf()
		{
			if(Employee::e_id >=1 && Employee::e_id <= 250)
			{
		    		pf1 = (salary1/100)*12;
				Pf =pf1;
				Salary =salary1;
			}
			else if(Employee::e_id >= 251 && Employee::e_id <= 500)
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

		Salary_Inhand operator -(Salary_Inhand& s)				//Operator Overloading
		{
			Salary_Inhand res(0);
			res.inHand = Salary - s.Pf;
			return res;
		}
		void print()
		{
			pf();
			cout<<"In-Hand Salary is : "<<(Salary-Pf)<<endl;
		}
		
};

int main()
{
	int ch;
	cout<<"\n1.Employee\n2.Intern\n3.Exit\n";
	cout<<"Enter your area : ";
	cin>>ch;
	cout<<endl<<endl;
	if(ch==1)
	{
		Employee e1;
		e1.domain();
            	cout<<endl<<endl<<"***************************************Employee Information***************************************"<<endl;
            	e1.display();
            	e1.salary();
		Salary_Inhand i1(i1.Salary),i2(i2.Pf);
		Salary_Inhand i3 = i1 - i2;
		i3.print();	
        }
        else if(ch==2)
        {
           	Intern i;
		i.get_info();
            	cout<<"\n\n***************************************Intern Information***************************************"<<endl;
            	i.display();
            	cout<<"\n";
        }
	else if(ch==3)
	{
		
	}
        else
        {
           	cout<<"Invalid Input";
        }
	return 0;
}


