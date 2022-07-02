#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("武陵高中109學年度，班級：111\n") ;
	printf("長：%d 寬：%d的長方形面積=%d\n",128,9,128*9);
	int DELAY=1;
	int num = 3;
	system("PAUSE");
	printf("班級\t座號\t姓名\n");
	sleep(DELAY);
	printf("%d\t%d\t江禹叡", 104, num^2);
	printf("\nR=%d\tAREA=%.2f", 3, 3*3*3.14159);
	printf("%d+%d=%d\n",3,5,3+5);

    printf("%d-%d=%d\n",3,5,3-5);

    printf("%d*%d=%d\n",3,5,3*5);
	printf("%d/%d=%.3f\n",5,3,5/3.0);
    printf("%d/%d=%f\n",5,3,(float)5/3);
	
}

