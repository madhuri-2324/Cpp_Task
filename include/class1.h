#ifndef CLASS1_H
#define CLASS1_H
#include<string.h>
using namespace std;

class Organization
{
	protected:
		char c_name[20];
		char c_addr[25];
		int distance;
   
 		void getInfo();								
	
		void display();
};
#endif
