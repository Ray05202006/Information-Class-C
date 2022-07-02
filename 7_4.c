#include<stdio.h>

int main()

{

    int score;

    printf("請輸入你的分數:");

    scanf("%d",&score);
    
    if(score > 100 || score < 0) {
    	printf("error: out of range");
	}
    
    else if(score >= 60) {
    	printf("及格");
	}
	else if(score >= 40) {
		printf("補考");
	}
	else {
		printf("死當");
	}

     return 0;

}
