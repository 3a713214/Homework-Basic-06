#include <stdio.h> 
#include <stdlib.h> 
int main(void)
{
	int year; 
	printf("輸入一個西元年數：");
	scanf("%d" , &year); 
	if((year%4==0&&year%100!=0)||year%400==0) 
	{ 
		printf("閏年\n");
	}
	else
	{
		printf("平年\n");
	}
    system("pause"); 
    return 0; 
}



