#include<stdio.h>

int main()
{
	int S,num_z,year,running=1;
	float pi = 3.14159,area,r,C,F;
	
	printf("\n================�W�ŭp���================\n");
	printf("||\t\t\t\t\t||\n");
	printf("||\t1.�ꭱ�n�p���\t\t\t||\n");
	printf("||\t2.�ū��ഫ�p���(�����ؤ�)\t||\n");
	printf("||\t3.�ū��ഫ�p���(�ؤ������)\t||\n");
	printf("||\t4.�_�ư��ƧP�_\t\t\t||\n");
	printf("||\t5.�|�~�P�_�u��\t\t\t||\n");
	printf("||\t\t\t\t\t||\n");
	printf("==========================================\n");
	
	while(running) 
	{
		printf("�п�J�A����ܡG");
		scanf("%d",&S);
		
		if(S==0)
		{
			break;
		}
		else if(S==1)
		{
			printf("�A�諸�O1.�ꭱ�n�p���");
			printf("\n��J�b�|:");
			
			scanf("%f",&r);
			
			printf("�ꭱ�n: %.2f \n",area = r*r*pi);
			
		}
		else if(S==2)
		{
			printf("�A�諸�O2.�ū��ഫ�p���(�����ؤ�)");
			printf("\n��J���ū�:");
			
			scanf("%f",&C);
			
			F = (float)9/5*C + 32;
			
			printf("\n�ؤ�ū�=%.2f",F);
			
		}
		else if(S==3)
		{
			printf("�A�諸�O3.�ū��ഫ�p���(�ؤ������)");
			printf("\n��J�ؤ�ū�:");
			
			scanf("%f",&F);
			
			C = (float)5/9 * (F-32);
			
			printf("\n���ū�=%.2f",C);
			
		}
		else if(S==4)
		{
			printf("�A�諸�O4.�_�ư��ƧP�_");
			printf("\n�п�J��ơG");
	
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
			printf("�A�諸�O5.�|�~�P�_�u��");
			printf("\n�п�J�~���G");
			
			scanf("%d",&year);
			
			if((year%4)==0 && (year%100)!=0 || (year%400) ==0)
			{
			    printf ("%d�O�|�~\n",year);
			}
			else
			{
			    printf ("%d���O�|�~�A�O���~\n",year);
			}
		}
		else
		{
			printf("�S��%d���ﶵ\n",S);
		}
	}
	
	return 0;
		
} 
