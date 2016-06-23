#include <iostream.h>
using percentage=double;
percentage cal_perc(int marks1,int marks2,int marks3,int marks4,int marks5);
int main()
{
double per=cal_perc(69,70,63,65,89);
std::cout<<"\nPercentage:"<<per;
}
percentage cal_perc(int marks1,int marks2,int marks3,int marks4,int marks5)
{
	int total=marks1+marks2+marks3+marks4+marks5;
	double s=(double)total/500*100;

	return s;
}
