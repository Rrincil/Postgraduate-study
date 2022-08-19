#include <stdio.h>
void printArray(char a[]){
	printf("%s\n",a);
	int i = 0; //int i,j = 0; 会抛出异常，单独赋值
	int j = 0;
	while(a[i]!='\0'){ //while(a[i])||while(a[i]!=0)   '/0' = 0 非0就为真
		printf("%c\n",a[i]);
		i++;
	}
	//改变字符 大写变小写+32 小写变大写-32
	while(a[j]!=0){
		a[j] -=32;
		printf("%c",a[j]);
		j++;
	}
}
//初始化字符数组
void InitAarray(int a[],int n){
	for(int i=0;i<n;i++){
		scanf("%c",&a[i]);
	}
}

//初始化字符串数组
void InitAarray2(int a[]){
	gets(a);
	puts(a);
	scanf("%s",a);
	printf("%s",a);
}

int main(){
	char a[3] ={0,'a','2'};
	printf("%c\n%c\n",a[1],a[2]);
	//初始化字符串
	char b0[3] = {'h','o','w'};
	char b[8] = "hello";
	printf("a=%s\nb=%s\n",b0,b);
	
	//读取字符串
	char x[10],y[10];
	scanf("%s%s",x,y);
	printf("%s---%s\n",x,y);
	printArray(x);
	
	
	return 0; //main函数的返回值
}
