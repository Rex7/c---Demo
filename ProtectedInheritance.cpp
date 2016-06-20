#include <iostream.h>
#include <string>
class School
{
	protected :
		int school_id;
		std::string sch_name;
	public:
		void read_data(std::string sch_name,int school_id)
		{
			this->school_id=school_id;
			this->sch_name=sch_name;
		}
};
class Student :protected School
{
	private:
		std::string stud_name;
		int roll_no;
	public:
		void set_data(std::string sch_name,int school_id,std::string stud_name,int roll_no)
		{
			read_data(sch_name,school_id);
			this->stud_name=stud_name;
			this->roll_no=roll_no;
		}
		void display()
		{
			std::cout<<"\n School Id:"<<school_id<<"\n School Name:"<<sch_name
			<<
			"\n Student Name:"<<stud_name<<"\n Roll No:"<<roll_no;
		}
};
int main()
{
	Student s;
s.set_data("our lady of good counsel high school",216478,"regis charles",22);
	s.display();
	
}











