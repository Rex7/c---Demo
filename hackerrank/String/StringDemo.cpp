#include <iostream>
#include <string>

int main(){
	char s1_c,s2_c;
	std::string s1;
	std::string s2;
	std::cin>>s1>>s2;	
	int size1=s1.size();
int size2=s2.size();
std::string combine =s1+s2;
std::cout<<size1<<" "<<size2;	
std::cout<<"\n"<<combine;
s1_c=s1[0];
s2_c=s2[0];
s1[0]=s2_c;
s2[0]=s1_c;
std::cout<<"\n"<<s1<<" "<<s2;
}	
