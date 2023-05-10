#include<iostream>
#include<string.h>

using namespace std;

class Animal
{
	public :
	
		int age;
		char name[50];
		char origin[50];
		char type[50];
		
	void set_value(int age,char name[],char origin[],char type[])
	{
		this->age= age;
		strcpy(this->name,name);
		strcpy(this->origin,origin);
		strcpy(this->type,type);
	}
};

class Zebra :public Animal
{
	public :
		void display_value()
		{
			cout<<"The Zebra Name is="<<name<<endl;
			cout<<"This Zebra's Age is="<<age<<endl;
			cout<<"The Zebra's Origin is="<<origin<<endl;
			cout<<"The Zebra is type of="<<type<<endl;
		}
};

class Dolphin :public Animal
{
	public :
		void get_value()
		{
			cout<<"The Dolphin Name is="<<name<<endl;
			cout<<"This Dolphin's Age is="<<age<<endl;
			cout<<"The Dolphin's Origin is="<<origin<<endl;
			cout<<"The Dolphin is type of="<<type<<endl;
		}
};

main()
{
	Zebra z;
	Dolphin d;
	
	z.set_value(25,"Joy","Eastern Africa","Land Animal");
	    cout<<endl;
	d.set_value(35,"Jenny","Ocean","Aquatic Animal");
	    cout<<endl;

	z.display_value();
		cout<<endl;
	d.get_value();
	    cout<<endl;
}
