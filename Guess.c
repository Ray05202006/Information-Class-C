#include<stdio.h>
#include<stdlib.h>

int main() {
	int ans=36,user,max=100,min=0;
	while(1) {
		printf("%d~%d²q¤@­Ó:",min,max);
		scanf("%d", &user);
		//printf("%d\n",user);
		if(user>ans && user<max) {
			max = user;
			printf("You are wrong. ans=%d ~ %d\n",min,max);
		}
		else if(user<ans && user>min) {
			min = user;
			printf("You are wrong. ans=%d~%d\n",min,max);
		}
		else if(user>=max || user<=min) {
			printf("What are you doing?\n");
		}
		else {
			printf("You are right!");
			break;
		}
	}
	return(0);
}
