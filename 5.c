/*�ŧi�ܼ�*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int DELAY=1;
	int num = 3;
	float pi = 3.14159,area;
	int a,b,c,d;
	int r = 7;
	float bottom, height;
	
	bottom = 10, height = 4;
	
	a = 3;
	b = a + 5;
	a = a + 10;
	c = a + pi;
	printf("���n=%f\n",bottom*height/2);
	printf("a�G%d b�G%d c�G%d d�G%d area: %f \n",a,b,c,d,area = r*r*pi);
	printf("�Z������109�Ǧ~�סA�Z�šG111\n");
	printf("���G%d �e�G%d������έ��n=%d\n",128,9,128*9);
	system("PAUSE");
	printf("�Z��\t�y��\t�m�W\n");
	sleep(DELAY);
	printf("%d\t%d\t������", 104, num^2);
	
	printf("\nR=%d\tAREA=%f\n", 3, 3*3*pi);
	printf("\nR=%d\tAREA=%.2f\n", 3, 3*3*pi);
	printf("%d+%d=%d\n",3,5,3+5);
    printf("%d-%d=%d\n",3,5,3-5);
    printf("%d*%d=%d\n",3,5,3*5);
	printf("%d/%d=%.3f\n",5,3,5/3.0);
    printf("%d/%d=%f\n",5,3,(float)5/3);
	
}

