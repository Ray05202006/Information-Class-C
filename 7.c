/*選擇結構(if....else)*/
#include<stdio.h>
#include<stdlib.h>

int main()
{

    float Money;

    printf("請輸入購買金額：");

    scanf("%f",&Money);
    
    if(Money >= 2000)
    {
    	printf("滿2000打8折\n");
    	Money = Money * 0.8;
	}
	else
	{
		Money = Money * 0.95;
	}
    printf("結帳金額：%.2f",Money);

    return 0;

}

