#include<stdio.h>

int main() {
	int a,b,run=1;
	
	printf("****�P�_���p���ƬO�_�����j���ƪ��]��****\n\n");
	
	while(run) {
		
		printf("�п�J�Ĥ@�ӥ����:");
		scanf("%d",&a);
		printf("�п�J�ĤG�ӥ����:");
		scanf("%d",&b);
		
		if(a<=0||b<=0) {
			printf("���~: �A��J�줣�O����ƪ��Ʀr\n");
			continue;
		}
		
		if(a>=b&&a%b==0) {
			printf("%d�O%d���]��\n",b,a);
			printf("�O�_�~��?\t��0=No,1=Yes\n");
			scanf("%d",&run);
		}
		else if(a>=b&&a%b!=0) {
			printf("%d���O%d���]��\n",b,a);
			printf("�O�_�~��?\t��0=No,1=Yes\n");
			scanf("%d",&run);
		}
		else if(a<b&&b%a==0) {
			printf("%d�O%d���]��\n",a,b);
			printf("�O�_�~��?\t��0=No,1=Yes\n");
			scanf("%d",&run);
		}
		else {
			printf("%d���O%d���]��\n",a,b);
			printf("�O�_�~��?\t��0=No,1=Yes\n");
			scanf("%d",&run);
		}
	}
}

