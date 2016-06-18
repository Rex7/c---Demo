#include <iostream.h>
#include <string>
int main()
{
std::string one,two,s,word,substring;
std::cout<<"\n Enter Name 1:";
std::getline(std::cin,one);
std::cout<<"\n Enter String 2:";
std::getline(std::cin,two);
//concating string one and two 
std::string third=one + two;
std::cout<<"\nfirst string:"<<one;
std::cout<<"\n second string :"<<two;
std::cout<<"\nnew string :"<<third;
//getting the size of the string one 
int size=one.length();
std::cout<<"\nlength of string one:"<<size;
std::cout<<"\nComparing string one and two";
if((one.compare(two))==0)
{
	std::cout<<"\nBoth String Are Equal";
}
else
	std::cout<<"\nIts Not Equal";
//enter to find a word from a given sentence
std::cout<<"\nEnter a word to find?";
std::getline(std::cin,word);
//finding the index of the given word
int index=one.find(word);
std::cout<<"index of the word :"<<index;
//with the obove information separating the string from base string
substring=one.substr(index,size-index);
std::cout<<"\n SubString is :"<<substring;
	return 0;
	
}
