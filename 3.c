#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("�Z������109�Ǧ~�סA�Z�šG111\n") ;
	printf("���G%d �e�G%d������έ��n=%d\n",128,9,128*9);
	int DELAY=1;
	int num = 3;
	system("PAUSE");
	printf("�Z��\t�y��\t�m�W\n");
	sleep(DELAY);
	printf("%d\t%d\t������", 104, num^2);
	printf("\nR=%d\tAREA=%.2f", 3, 3*3*3.14159);
	printf("%d+%d=%d\n",3,5,3+5);

    printf("%d-%d=%d\n",3,5,3-5);

    printf("%d*%d=%d\n",3,5,3*5);
	printf("%d/%d=%.3f\n",5,3,5/3.0);
    printf("%d/%d=%f\n",5,3,(float)5/3);
	
}

