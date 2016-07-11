#include <iostream.h>
#include <string>
class semester
{
private :
//code which determines which semester he belongs ?
int code;
int english,communication,math_1,math_2,physics_1,physics_2,
chemistry_1,chemistry_2,wpd,cpp,c;
public:
	//when object is created it is given default value of first sem
	semester()
	{
		code=1;
	}
	//parametrized constructor that takes the code which determines the sem
	semester(int code)
	{
		this->code=code;
	}
	public :
		void read()
		{
			switch(code)
			{
			case 1:
				std::cout<<"First Semester:"<<std::endl;
				std::cout<<"Enter marks for English:"<<std::endl;
				std::cin>>english;
				std::cout<<"Enter marks for first semester maths :"<<std::endl;
				std::cin>>math_1;
				std::cout<<"Enter marks for first semester chemistry:"<<std::endl;
				std::cin>>chemistry_1;
				std::cout<<"Enter marks for c programming:"<<std::endl;
				std::cin>>c;
				std::cout<<"Enter marks for Physics:"<<std::endl;
				std::cin>>physics_1;
				break;
			case 2:
				std::cout<<"Second Semester:"<<std::endl;
				std::cout<<"Enter marks for Communication:"<<std::endl;
				std::cin>>communication;
				std::cout<<"Enter marks for second semester maths :"<<std::endl;
				std::cin>>math_2;
				std::cout<<"Enter marks for second semester chemistry:"<<std::endl;
				std::cin>>chemistry_2;
				std::cout<<"Enter marks for c++ programming:"<<std::endl;
				std::cin>>cpp;
				std::cout<<"Enter marks for second semester Physics:"<<std::endl;
				std::cin>>physics_2;
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			default:
				break;	
			}
		}
		void display_data()
		{
			switch(code)
			{
				case 1:
					std::cout<<"First Semester Detail"<<std::endl;
					std::cout<<"C:"<<c<<"\nMath :"<<math_1<<"\nEnglish:"
					<<english<<"\nPhysics:"<<physics_1<<"\nChemistry:"
					<<chemistry_1;
					break;
				case 2:
					std::cout<<"Second Semester Detail"<<std::endl;
					std::cout<<"C++:"<<cpp<<"\nMath :"<<math_2<<"\nCommunication:"
					<<communication<<"Physics:"<<physics_2<<"\nChemistry:"
					<<chemistry_2;
					break;
				case 3:
					break;
				case 4:
					break;
				case 5:
					break;
				case 6:
					break;
				default:
				break;	
			}
		}
		
		
float operator/(semester sem){
float percentage;
if(this->code==sem.code){
	std::cout<<"Sorry both are from same semester"<<std::endl;
}
else{
	switch(sem.code)
	{
		case 1:
			if(this->code==2){
				std::cout<<"\nSemester calculated for percentage are :"<<this->code<<sem.code<<std::endl;
			}
			else{
				std::cout<<"\n Wrong semester entered .... Try Again";
			}
			break;
		case 2:
			if(this->code==1){
				std::cout<<"\nSemester calculated for percentage are :"<<this->code<<sem.code<<std::endl;
			
			}
			else{
				std::cout<<"\n Wrong semester entered .... Try Again";
			}
			break;
		case 3:
			if(this->code==4){
				std::cout<<"\nSemester calculated for percentage are :"<<this->code<<sem.code<<std::endl;
			
			}
			else{
				std::cout<<"\n Wrong semester entered .... Try Again";
			}
			break;
		case 4:
			if(this->code==3){
				std::cout<<"\nSemester calculated for percentage are :"<<this->code<<sem.code<<std::endl;
			
			}
			else{
			std::cout<<"\n Wrong semester entered .... Try Again";
			}
		break;
		case 5:
			if(this->code==5){
				std::cout<<"\nSemester calculated for percentage are :"<<this->code<<sem.code<<std::endl;
	
			}
			else{
				std::cout<<"\n Wrong semester entered .... Try Again";
			}
			break;
		case 6:
			if(this->code==6){
				std::cout<<"\nSemester calculated for percentage are :"<<this->code<<sem.code<<std::endl;
				
			}
			else{
				std::cout<<"\n Wrong semester entered .... Try Again";
			}
			break;
		default:
			std::cout<<"\nNo Offence, What you entered is bullshit.";
			break;
			
	}//end of switch clause
}
}
};//end of class semester
int main()
{
	
semester s,s1,s2(2),s3(3),s4(4),s5(5),s6(6);
float percentage;

s4/s6;
s3/s1;
s6/s3;
s1/s6;
s1/9;

return 0;
}
