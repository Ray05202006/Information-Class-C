#include<stdio.h>

int main()

{

    int score;

    printf("�п�J�A������:");

    scanf("%d",&score);
    
    if(score > 100 || score < 0) {
    	printf("error: out of range");
	}
    
    else if(score >= 60) {
    	printf("�ή�");
	}
	else if(score >= 40) {
		printf("�ɦ�");
	}
	else {
		printf("����");
	}

     return 0;

}
