#include <iostream.h>
#include <string>
class Human
{
	protected:
		int age;
		std::string name;
		public:
	
			void get_data(int age,std::string name)
			{
					this->age=age;
				this->name=name;
			}
			//Destructor
			~Human()
			{
				
			}
};
//end of class Human
class Student :public Human
{
private:
int std_id;
public:
	//Constructor
	Student(){}
	void set_id(int std_id)
	{
	this->std_id=std_id;
	}
	void display()
	{
		std::cout<<"\nId:"<<std_id<<"\n Name :"<<name<<"\nAge:"<<age;
	}
	//Destructor
	~Student()
	{
		
	}
};//End of class Student
class Company {
	protected:
		std::string cmp_name;
		std::string emp_name;
		int emp_id;
		double sal;
	public :
		//constructor
		Company()
		{
	 	cmp_name="";
		emp_name="";
		emp_id=0;
	 	sal=0.0;	
		}
	void get_emp_details(std::string emp_name,std::string cmp_name,int emp_id,double sal)
		{
			this->emp_name=emp_name;
			this->cmp_name=cmp_name;
			this->emp_id=emp_id;
			this->sal=sal;
		}
		//destructor
		~Company()
		{
			
		}
		};//end of class Comapny
		class Employee :public Company ,public Human
		{
		public:
			void display()
			{
				std::cout<<"\nEmployee Id:"<<emp_id<<"\n Comapny Name:"<<cmp_name<<"\n Salary :"<<sal;
			}
			//Destructor
			~Employee()
			{
				
			}
		};//end of class Employee
int main()
{
	Student s;
	Employee emp;
	s.get_data(23,"regis charles");
	s.set_id(1);
	s.display();
	//Employee details;
	emp.get_emp_details("regis charles","Rex Corporation",16,600000);
	emp.display();
		
	return 0;
}
