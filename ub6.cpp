#include <stdio.h> 
#include <stdlib.h> 
int main(void)
{
	int year; 
	printf("��J�@�Ӧ褸�~�ơG");
	scanf("%d" , &year); 
	if((year%4==0&&year%100!=0)||year%400==0) 
	{ 
		printf("�|�~\n");
	}
	else
	{
		printf("���~\n");
	}
    system("pause"); 
    return 0; 
}



