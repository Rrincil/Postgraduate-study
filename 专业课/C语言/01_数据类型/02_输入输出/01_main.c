#include <stdio.h>
#include <stdlib.h>
int main(){
//	int x;
//	float y;
//	int z;
//	scanf("%d,%f",&x,&y);
//	z = (int)(x+y);
//	printf("%d\n",z);
//	printf("保留两位小数==%.2f",x+y);
	//system("pause");//暂停程序
	
	
	/**
	*scanf的匹配机制：在读取整型数，浮点数，字符串时会忽略\n(回车符)，空格符等
	*因此 j获取的是\n，而z可以获取值 解决办法：每次scanf %c前加一个空格
	* scanf的返回值是读取变量的数量，发生错误时返回	EOF-----#define EOF (-1)
	*/
	//当缓冲区为空的时候，scanf()会阻塞
	int i,z;
	char j;
	scanf("%d",&i);
	printf("%d\n",i);
	//scanf("%c",&j);
	scanf(" %c",&j);//%c前加空格
	printf("j=%c",j);//读取了\n
	scanf("%d",&z);
	printf("%d",z);//可以获取z的值
	
	
	
	//循环读取 在行首按三次或一次（看版本）ctr+z会出错，ctr+c终止; rewind(stdin)：清空缓冲区
	int x;
	while(rewind(stdin),scanf("%d",&x)!=EOF){ //输入字符a会疯狂打印--读取的a不为整数，此时scanf的返回值是0!=-1会一直打印，陷入死循环
		printf("%d\n",x);
		
	}
	return 0;
}