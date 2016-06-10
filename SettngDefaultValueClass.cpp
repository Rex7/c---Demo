#include <iostream.h>
#include <string>
class ClassDemo
{
	int age;
	std::string name;
	float sal;
	public:
		ClassDemo()
		{
			age=0;
			name="no_name";
			sal=0.0;
			
		}
		void read(void)
		{
			std::cout<<"\n Enter Name:";
			std::cin>>name;
			std::cout<<"\n Enter Age:";
			std::cin>>age;
		}
		void display(void)
		{
			std::cout<<"Name:"<<name<<"\n Age:"<<age<<"\nSalary:"<<sal;
		}
};
main()
{
	ClassDemo d;
	d.display();
	return 0;
}

