#include <stdio.h>
void peint(int n,int m){
	/**
	 * ÓÃµİ¹é¼ÆËãn!
	 **/
	m = m*n;
	n--;
	if(n>0){
		peint(n,m);
	}else{
		printf("%d",m);
	}
}
int main(){
	int n;
	int m =1;
	scanf("%d",&n);
	peint(n,m);
	
}
