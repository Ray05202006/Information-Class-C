/*��ܵ��c(if....else)�|�~�P�_*/
#include<stdio.h>
#include<stdlib.h>

int main() {

    int year;

    printf("�п�J�~���G");

    scanf("%d",&year);
    
    if(year%4 == 0) {//�{�|�@�|
    	if(year%100 == 0) {//�{�ʤ��|
    		if(year%400 == 0) {//�|�ʤS�|
    			printf("%d is �|�~.",year);
			}
			else { 
				printf("%d is ���~.",year);
			}
		}
		else {
			printf("%d is �|�~.",year);
		}
	}
	else {
		printf("%d is ���~.",year);
	}
	
    return 0;

}

