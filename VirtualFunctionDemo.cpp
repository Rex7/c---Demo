#include <iostream.h>
#include <string>
class Human
{
	public:
	virtual	void display()
	{
		std::cout<<"\nAm a Human";
	}
};
class Student:public Human
{
	public:
		void display()
		{
		
	std::cout<<"\n Am A Student";
}
	
};
class GradStudent:public Human
{
	public:
		void display()
		{
		
	std::cout<<"\n Am graduated Student";
	
}

};
//passing object which is type human
void whois(Human &h)
{
	h.display();
}
int main()
{
Student s;
GradStudent j;
whois(s);
whois(j);
return 0;
}


