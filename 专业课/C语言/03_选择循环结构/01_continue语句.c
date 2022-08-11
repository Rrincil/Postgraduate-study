#include <stdio.h>
int main(){
	//计算1~100奇数的和
	int i =0;
	int m = 0;
	while(i<100){
		i++;
		if(i%2==0){
			//偶数跳出循环
			continue;
		}
		m = m+i;
	}
	printf("m的值为%d",m);
}
