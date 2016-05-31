#include <iostream.h>
using namespace std;
int main()
{
	int flag;
	for(int i=2;i<=100;i++)
	{
		flag=0;
	for(int j=2;j<i;j++)
	{
		if(i%j==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"\nPrime number"<<i;
	}
	
	


}
return 0;
}
