//Class Demo 
#include <iostream.h>
#include <string>
class Person 
{
protected:
	int age;
	float sal;
	std::string name;
	public:
	
		Person(void)
		{
			std::cout<<"\nObject created";
		}
	
		void read()
		{
			std::cout<<"\nEnter your name:";
			std::getline(std::cin,name);
			std::cout<<"\nEnter your age :";
			std::cin>>age;
			std::cout<<"\nEnter Your Salary:";
			std::cin>>sal;
			std::cin.ignore();
		}
	void display()
		{
			std::cout<<"\n Name of the person :"<<name<<"\n Age:"<<age<<"\nSalary:"<<sal;
		}
};
int main()
{
	/*
Person *ptr;
ptr=new Person[2];
for(int i=0;i<2;i++)
{
	(ptr+i)->read();
}
for(int i=0;i<2;i++)
{
	(ptr+i)->display();
}
delete [] ptr;
*/
Person p[3];
for(int i=0;i<3;i++)
{
	p[i].read();
	
}
for(int i=0;i<3;i++)
{
	p[i].display();
}










}

