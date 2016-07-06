#include <iostream.h>
#include <string>
class Marks
{
int english,math,science;

public:
Marks(int english,int math,int science)
{
	this->english=english;
	this->math=math;
	this->science=science;
}
Marks()
{
	english=0;
	math=0;
	science=0;
}
void display_marks()
{
	std::cout<<"\nMarks in English:"<<english<<"\n Marks in Math:"<<math<<"\nMarks in Science:"<<science;
}
//overloading + operator
Marks operator+(Marks m)
{
	Marks ne;
	ne.english=this->english+m.english;
	ne.math=this->math+m.math;
	ne.science=this->science+m.science;
	return ne;
}
Marks operator-(Marks m);
};
Marks Marks::operator-(Marks m)
{
		Marks ne;
	ne.english=this->english-m.english;
	ne.math=this->math-m.math;
	ne.science=this->science-m.science;
	return ne;
}
int main()
{
Marks m(55,65,45),m2(65,85,25),m3;
m3=m+m2;
m3.display_marks();
m3=m-m2;
std::cout<<"\nperforming minus operation on marks:\n";
m3.display_marks();
return 0;	
}
