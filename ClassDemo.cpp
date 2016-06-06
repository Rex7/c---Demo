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
		Person(std::string name,int age,float sal)
		{
		this->name=	name;
		this->age=age;
		this->	sal=sal;
			std::cout<<"\n Object Created Using Parametrized Constructor ";
		
		}
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
		}
	void display()
		{
			std::cout<<"\n Name of the person :"<<name<<"\n Age:"<<age<<"\nSalary:"<<sal;
		}
};
int main()
{
	Person ps,p1("regis",655,699999);
	ps.read();
	ps.display();
	p1.display();
}

