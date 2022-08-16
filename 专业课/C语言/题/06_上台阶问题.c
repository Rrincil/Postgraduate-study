#include <stdio.h>


	/**
	 * @brief 
	 * 
	 * 假如有n个台阶，-次只能上1个台阶或2个台阶，请问走到第n个台阶有几种走法?为便于读者理解题意，这里举例说明如下:假如
	 有3个台阶，那么总计就有3种走法:
	 	第-种为每次上1个台阶，上3次; 
		第二种为先上2个台阶，再上1个台阶;
		第三种为先上1个台阶，再上2个台阶。
		输入为n,输出为走到第n个台阶有几种走法
		1
		Cn-2   +2
	 * @return 
	 **/
	 
	 
	 
	 /**
	  *  1.使用递归算法
	  **/
	 
int count(int n){
	if(n == 1 || n==2){
		return n;
	}
	return count(n-1)+count(n-2);
}	 
int main(){
	int n,m=0;
	int x=1,y =2;
	scanf("%d",&n);
	printf("%d",count(n));
	
//	for(int i=0;i<=n;i++){
//		for(int j=0;j<n-i;j=j+2){
//			if((i+j*2)==n){
//				m++;
//			}
//		}
//	}
//	printf("%d",m);

}
