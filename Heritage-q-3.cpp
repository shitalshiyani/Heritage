#include<iostream>
#include<string.h>

using namespace std;

class Employee 
{
	public :
		int id;
		char name[50];
		
		void set_value(int id,char name[])
		{
			cout<<"Enter Employee Id="<<id<<endl<<"Enter Employee Name="<<name<<endl;
		}
};

class Details
{
	public :
		char email[100];
		char contact_no[12];
		
		void get_value(char email[],char contact_no[])
		{
			cout<<"Enter Employee Email Id="<<email<<endl<<"Enter Employee Contact No.="<<contact_no<<endl;
		}
};

class Info : public Employee, public Details 
{
	public :
		char address[50];
		
		void display_value(char address[])
		{
			cout<<"Enter Employee Address="<<address<<endl;
		}
};

main()
{
	Info i;
	
	i.set_value(2,"Sagar");
	i.get_value("sagar@gmail.com","9825056105");
	i.display_value("Sarthana Jakatnaka");
	
}
