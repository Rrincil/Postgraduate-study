#include <stdio.h>
void sort(){
	
}
int main(){
	int (p)[2];
	
	char a[10][20];
	char b[20];
	char *p = a;
	for(int i=0;i<2;i++){
		//scanf("%d",p+i);
		for(int j = 0;i<2;j++){
			scanf("%s",&a[i][j]);
		}
	}
	for(int i=0;i<2;i++){
	//	printf("%s\n",*(p+1));
		puts(a[i]);
	}
	
}
