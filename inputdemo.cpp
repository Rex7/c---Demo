#include <iostream.h>
#include <conio.h>
using namespace std;
 main()
{
	int age;
char name[25];
	cout<<"Enter name:";
	cin>>name;
	cout<<"Enter your age:";
	cin>>age;
	/*
	
	cout<<"\n Name of the person :"<<name<<"\nAge :"<<age;
	if(age<=18)
	{
		cout<<"\n Sorry user"<<name<<"your not allowed to access the content";
	}
	else
		cout<<"\n your allowed to access the content :"<<name<<"your age is perfect"<<age;
		*/
// Using trenory operator instead of big blocks of if and else
age<=18 ? cout<<"you'r too young mr "<<name :cout<<"your old enough mr "<<name;
	

	return 0;
}
