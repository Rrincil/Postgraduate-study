#include <stdio.h>
#include <string.h>
void change(char x[]){  //形参放的是指针类型，并不是数组类型, x存放的是地址

	for(int i=0;i<strlen(x);i++){
		printf("a[%d]=%c\n",i,x[i]);   //本质是指针的偏移
	}
}

void change2(char *x){  //形参放的是指针类型，并不是数组类型
	for(int i=0;i<strlen(x);i++){
		printf("a[%d]=%c\n",i,x[i]);
	}
}
int main(){
	char c[10] = "nihaoya";
//	char a = 'A';
	//change(&a);
	change(c);
}
