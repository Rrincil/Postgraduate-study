#include <stdio.h>
int main(){
	//n ����1��10 ����n!
	int n;
	printf("������1��10��������\n");
	scanf("%d",&n);
	int y = n;
//	int m =0,x = 0;
//	while(!m){
//		if(n>=1&&n<=10){
//			m=1;
//			while(n>1){
//				x = n*(n-1);
//				n = n-1;
//				m = m*x;
//				n--;
//			}
//			printf("%d!Ϊ%d",y,m);
//		}else{
//			//��ѭ������
//			m = 0;
//			printf("������1��10��������\n");
//			scanf("%d",&n);
//			y = n;
//			continue;
//		}
//	}
	
	//����ѭ������---����һ��ѭ�� ��1��ʼ�˻�
	int total = 1;
	int z = 1;
	while(z<=n){
		total = total*z;
		z++;
	}
	printf("%d!Ϊ%d",n,total);
	
	
	
	
}


