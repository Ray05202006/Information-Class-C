/*��ܵ��c(if....else)*/
#include<stdio.h>
#include<stdlib.h>

int main()
{

    float Money;

    printf("�п�J�ʶR���B�G");

    scanf("%f",&Money);
    
    if(Money >= 2000)
    {
    	printf("��2000��8��\n");
    	Money = Money * 0.8;
	}
	else
	{
		Money = Money * 0.95;
	}
    printf("���b���B�G%.2f",Money);

    return 0;

}

