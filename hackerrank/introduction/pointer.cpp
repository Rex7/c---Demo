#include <stdio.h>
#include <iostream>

void update(int *a,int *b) {
	int ans;
    std::cout<<*a+*b;
if(*a<*b){
	ans=*b-*a;
}
else
	ans=*a-*b;
std::cout<<"\n"<<ans;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
  

    return 0;
}

