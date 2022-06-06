#ifndef CLASS1_H
#define CLASS1_H
#include<string.h>
using namespace std;

class Organization											//class Defination
{
	protected:											//access within class and it's child class
		char c_name[20];									//variables
		char c_addr[25];
		int distance;
   
 		void getInfo();										// function declaration						
	
		void display();
};
#endif
