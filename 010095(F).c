#include<stdio.h>

int main() {
	int a,b,run=1;
	
	printf("****判斷較小的數是否為較大的數的因數****\n\n");
	
	while(run) {
		
		printf("請輸入第一個正整數:");
		scanf("%d",&a);
		printf("請輸入第二個正整數:");
		scanf("%d",&b);
		
		if(a<=0||b<=0) {
			printf("錯誤: 你輸入到不是正整數的數字\n");
			continue;
		}
		
		if(a>=b&&a%b==0) {
			printf("%d是%d的因數\n",b,a);
			printf("是否繼續?\t★0=No,1=Yes\n");
			scanf("%d",&run);
		}
		else if(a>=b&&a%b!=0) {
			printf("%d不是%d的因數\n",b,a);
			printf("是否繼續?\t★0=No,1=Yes\n");
			scanf("%d",&run);
		}
		else if(a<b&&b%a==0) {
			printf("%d是%d的因數\n",a,b);
			printf("是否繼續?\t★0=No,1=Yes\n");
			scanf("%d",&run);
		}
		else {
			printf("%d不是%d的因數\n",a,b);
			printf("是否繼續?\t★0=No,1=Yes\n");
			scanf("%d",&run);
		}
	}
}

