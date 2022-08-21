#include <stdio.h>
/**
 * 在主程序中输入10个字符串，调用sort函数进行冒泡排序，然后在主函数中输出排序结果，其中字符串长度不超过20，
 * 字符串排序方式【按字母序递增用1表示，按字母序递减用0表示】和待排序的字符串由参数传递给sort 函数。
 * 要求自行设计sort函数，在主函数中，输入、输出应有相应提示。 【动态分配空间 和 释放内存】
 * 		方法1. 结构体数组
 * 		方法2. 二维数组
 **/
typedef struct{
	char s[20];
}str[10];
//输出（字符串）结构体数组
void printArray(str a){
	for(int i=0;i<10;i++){
		puts(a[i].s);
	}
	printf("\n=======================\n");
}
//初始化字符串
void Init(str a){
	for(int i=0;i<10;i++){
		scanf("%s",&a[i].s);//.运算符优先级高于&
	}
	//printArray(a);
}

void sort(str a,int n){
	int flage;
	for(int k=0;k<10;k++){
		int len = strlen(a[k].s);
		if(n){ //字母序递增用1
			int i = 0;
			while(a[k].s[i] != '\0'){
				flage = 0;
				int j = i+1;
				while(a[k].s[j] != '\0'){
					if(a[k].s[j]>a[k].s[i]){
						int tem  = a[k].s[i];
						a[k].s[i] = a[k].s[j];
						a[k].s[j] = tem;
						flage = 1;
					}
					j++;
				}
				i++;
				if(flage == 0){
					break;
				}
			}
		}else{//按字母序递减用0
			for(int i=0;i<len;i++){
				flage = 0;
				for(int j=i+1;j<len;j++){
					if(a[k].s[i]>a[k].s[j]){  //前面大于后面 就交换
						int tem  = a[k].s[i];
						a[k].s[i] = a[k].s[j];
						a[k].s[j] = tem;
						flage = 1;
					}
				}
				if(flage == 0){
					break;
				}
			}		
		}
	}	
	printArray(a);
}
int main(){
	int (p)[2];
	
	str a;
	Init(a);
	sort(a,1);
	sort(a,0);
}
