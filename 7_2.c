/*選擇結構(if....else)*/
#include<stdio.h>
#include<stdlib.h>

int main()
{

    int a;

    printf("請輸入整數：");

    scanf("%d",&a);
    
    if(a%2 == 0)
    {
    	printf("%d is even.",a);
	}
	
	else
	{
		printf("%d is odd.",a);
	}
	
    return 0;

}

