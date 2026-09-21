#include<stdio.h>
int main(){
	int age = 50;
	float high = 170.0f;
	float weigh = 133.0f;
	char name[] = "WuJianDao";
	
	printf("age = %d\n",age);
	printf("high = %f\n",high);
	printf("weigh = %f\n",weigh);
	printf("name = %s\n",name);
	
	int a = 5,b = 2;
	int number = a/b;
	printf("number = %d\n",number);
	printf("number = %f\n",(float)a/b);
	return 0;
}