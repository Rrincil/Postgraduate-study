#include <stdio.h>
#define M 4
#define N 5
void fun(int x,int y,int a[][y]){
	x = M;
	y = N;
	int total = 0;
	for(int i=0;i<M;i++){
		for(int j = 0;j<N;j++){
			if(i==0||i == x-1){
				total +=a[i][j];
			}else{
				if(j==0||j==y-1){
					total +=a[i][j];
				}
			}
		}
	}
	printf("周边之和为：%d",total);
}
int main(){
	int a[M][N];
	printf("请输入%d行数和%d列的二维数组：",M,N);
	for(int i=0;i<M;i++){
		for(int j = 0;j<N;j++){
			
			scanf("%d",&a[i][j]);
		}
	}
	fun(M,N,a);
}
