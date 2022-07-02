#include<stdio.h>

int main()
{
	int S,num_z,year,running=1;
	float pi = 3.14159,area,r,C,F;
	
	printf("\n================超級計算機================\n");
	printf("||\t\t\t\t\t||\n");
	printf("||\t1.圓面積計算機\t\t\t||\n");
	printf("||\t2.溫度轉換計算機(攝氏轉華氏)\t||\n");
	printf("||\t3.溫度轉換計算機(華氏轉攝氏)\t||\n");
	printf("||\t4.奇數偶數判斷\t\t\t||\n");
	printf("||\t5.閏年判斷工具\t\t\t||\n");
	printf("||\t\t\t\t\t||\n");
	printf("==========================================\n");
	
	while(running) 
	{
		printf("請輸入你的選擇：");
		scanf("%d",&S);
		
		if(S==0)
		{
			break;
		}
		else if(S==1)
		{
			printf("你選的是1.圓面積計算機");
			printf("\n輸入半徑:");
			
			scanf("%f",&r);
			
			printf("圓面積: %.2f \n",area = r*r*pi);
			
		}
		else if(S==2)
		{
			printf("你選的是2.溫度轉換計算機(攝氏轉華氏)");
			printf("\n輸入攝氏溫度:");
			
			scanf("%f",&C);
			
			F = (float)9/5*C + 32;
			
			printf("\n華氏溫度=%.2f",F);
			
		}
		else if(S==3)
		{
			printf("你選的是3.溫度轉換計算機(華氏轉攝氏)");
			printf("\n輸入華氏溫度:");
			
			scanf("%f",&F);
			
			C = (float)5/9 * (F-32);
			
			printf("\n攝氏溫度=%.2f",C);
			
		}
		else if(S==4)
		{
			printf("你選的是4.奇數偶數判斷");
			printf("\n請輸入整數：");
	
	    	scanf("%d",&num_z);
	    	
	    	if(num_z%2 == 0)
		    {
		    	printf("%d is even.",num_z);
			}
			else
			{
				printf("%d is odd.",num_z);
			}
		}
		else if(S==5)
		{
			printf("你選的是5.閏年判斷工具");
			printf("\n請輸入年分：");
			
			scanf("%d",&year);
			
			if((year%4)==0 && (year%100)!=0 || (year%400) ==0)
			{
			    printf ("%d是閏年\n",year);
			}
			else
			{
			    printf ("%d不是閏年，是平年\n",year);
			}
		}
		else
		{
			printf("沒有%d的選項\n",S);
		}
	}
	
	return 0;
		
} 
