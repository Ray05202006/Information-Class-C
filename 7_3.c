/*選擇結構(if....else)閏年判斷*/
#include<stdio.h>
#include<stdlib.h>

int main() {

    int year;

    printf("請輸入年分：");

    scanf("%d",&year);
    
    if(year%4 == 0) {//逢四一閏
    	if(year%100 == 0) {//逢百不閏
    		if(year%400 == 0) {//四百又閏
    			printf("%d is 閏年.",year);
			}
			else { 
				printf("%d is 平年.",year);
			}
		}
		else {
			printf("%d is 閏年.",year);
		}
	}
	else {
		printf("%d is 平年.",year);
	}
	
    return 0;

}

