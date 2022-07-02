/*宣告變數*/
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
	printf("面積=%f\n",bottom*height/2);
	printf("a：%d b：%d c：%d d：%d area: %f \n",a,b,c,d,area = r*r*pi);
	printf("武陵高中109學年度，班級：111\n");
	printf("長：%d 寬：%d的長方形面積=%d\n",128,9,128*9);
	system("PAUSE");
	printf("班級\t座號\t姓名\n");
	sleep(DELAY);
	printf("%d\t%d\t江禹叡", 104, num^2);
	
	printf("\nR=%d\tAREA=%f\n", 3, 3*3*pi);
	printf("\nR=%d\tAREA=%.2f\n", 3, 3*3*pi);
	printf("%d+%d=%d\n",3,5,3+5);
    printf("%d-%d=%d\n",3,5,3-5);
    printf("%d*%d=%d\n",3,5,3*5);
	printf("%d/%d=%.3f\n",5,3,5/3.0);
    printf("%d/%d=%f\n",5,3,(float)5/3);
	
}

