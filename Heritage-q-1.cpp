#include<iostream>

using namespace std;

class Mother
{
	public :
		void dispaly()
		{
			cout<<"Mother said today is Monday;"<<endl;
		}
};

class Daughter :public Mother
{
	public :
		void display()
		{
			cout<<"Daughter said today is my C,C++ Class."<<endl;
		}
};

main()
{
	Daughter d;

	d.dispaly();
	d.display();
	
}
