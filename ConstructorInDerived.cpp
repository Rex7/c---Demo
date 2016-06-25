#include <iostream.h>
/*
program for calling base class constructor in derived class constructor
*/
class base
{
	protected:
		std::string name;
		int roll;
	public:
			// derived class default constructor
		base()
		{
			std::cout<<"\nobject created in base class using default constructor";
		}
			// derived class parametrized  constructor
		base(std::string name,int roll)
		{
			std::cout<<"\nobject created in base class using parametrized constructor";
			this->name=name;
			this->roll=roll;
		}
		//destructor
	~base()
	{
		std::cout<<"\nbase class object destroyd\n";
	}
};//end of base class
class derived:public base
{
	public:
		// derived class default constructor
		derived()
		{
			name="anousmous";
			roll=0;
		std::cout<<"\nobject created in derived class using default constructor";	
		}
		// derived class parametrized constructor
		derived(std::string name,int roll):base(name,roll)
		{
			std::cout<<"\nobject created in derived class using parametrized constructor";
			
		}
		//function for setting values 
		void set_dat(std::string name,int roll)
		{
			this->name=name;
			this->roll=roll;
		}
		void display()
		{
			std::cout<<"\nName :"<<name<<"\nRoll no:"<<roll;
		}
		//destructor
		~derived()
		{
			std::cout<<"\nderived class object destroyed";
		}
};//end of class derived
int main()
{

derived b, d("reg",18);
b.display();
d.display();


}
