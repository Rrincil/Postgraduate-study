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
	printf("�ܱ�֮��Ϊ��%d",total);
}
int main(){
	int a[M][N];
	printf("������%d������%d�еĶ�ά���飺",M,N);
	for(int i=0;i<M;i++){
		for(int j = 0;j<N;j++){
			
			scanf("%d",&a[i][j]);
		}
	}
	fun(M,N,a);
}
