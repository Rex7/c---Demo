#include <iostream.h>
#include <string>
class base 
{
	protected :
		std::string name;
		int age;
	public:
		void read(std::string name,int age)
		{
		this->name=name;
		this->age=age;	
		}
	virtual	void display()=0;
};
class derived  : private base
{
	//changing the access control of base class member variable 
	public:
	using	base::name;
		
public:
	void read_dat(std::string name,int age)
	{
		read( name,age);
	}
	void display()
	   {
	   	std::cout<<"\nName:"<<name<<"\nAge:"<<age;
		std::cout<<"Whats up fellas";
		}	
};
int main()
{
	derived d;
	d.read_dat("regis",23);
	d.name="charles";
	d.display();
	return 0;
}
