#include <iostream.h>
#include <string>
void showdata();
int main()
{
showdata();	
}
void showdata()
{
	class emp
	{
		private:
			double sal;
			std::string e_name;
		public:
			void read(std::string e_name,double sal)
			{
				this->e_name=e_name;
				this->sal=sal;
			 } 
			 void display()
			 {
			 	std::cout<<"\nEmployee Name:"<<e_name<<"\nSalary:"<<sal;
			 }
	};
	emp e;
	e.read("Regis charles",600000);
	e.display();
}
