#include <stdio.h>

void fun(){
  	printf("fun() Called\n");
}

int main() 
{
	printf("Before Calling fun()\n");
    fun();
  	printf("After Calling fun()");
    return 0;
}