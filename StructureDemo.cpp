#include <iostream.h>
#include <string>
struct Employee
{
	std::string name;
int age;
double sal;	
};
 void get_data(Employee &emp)
{
std::cout<<"\nEnter Name:";
std::cin>>emp.name;
std::cout<<"\nEnter Age:?";
std::cin>>emp.age;
std::cout<<"\nEnter salary?";
std::cin>>emp.sal;
	
}
 void display(Employee &emp)
{
	std::cout<<"\nEmployee Name:"<<emp.name<<"\n Age:"<<emp.age<<"\nSalary:"<<emp.sal;
	emp.age=22;
	emp.name="rex";
	emp.sal=600000;
}
int main()
{
	Employee e;
	get_data(e);
	display(e);
	std::cout<<"\nEmployee Name:"<<e.name<<"\n Age:"<<e.age<<"\nSalary:"<<e.sal;
	
	
}
