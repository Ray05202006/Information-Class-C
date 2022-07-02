/*選擇結構(if....else)*/
#include<stdio.h>
#include<stdlib.h>

int main()
{

    float score;

    printf("請輸入成績：");

    scanf("%f",&score);
    
    if(score < 60)
    {
    	printf("沒有及格，待改進!");
	}
	
	else
	{
		printf("及格了，繼續保持!");
	}
	
    return 0;

}

