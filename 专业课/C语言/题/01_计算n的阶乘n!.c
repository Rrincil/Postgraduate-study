#include <stdio.h>
int main(){
	//n 属于1到10 计算n!
	int n;
	printf("请输入1到10的整数：\n");
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
//			printf("%d!为%d",y,m);
//		}else{
//			//做循环输入
//			m = 0;
//			printf("请输入1到10的整数：\n");
//			scanf("%d",&n);
//			y = n;
//			continue;
//		}
//	}
	
	//不做循环输入---减少一个循环 从1开始乘积
	int total = 1;
	int z = 1;
	while(z<=n){
		total = total*z;
		z++;
	}
	printf("%d!为%d",n,total);
	
	
	
	
}


