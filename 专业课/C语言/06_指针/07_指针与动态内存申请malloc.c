#include <stdio.h>
#include <string.h>
int main(){
	int a;
	scanf("申请空间大小%d",&a);
	char *p;
	
	p = (char *)malloc(a);
	printf("p释放前的值%d\n",p);
	
	strcpy(p,"hello nihao\n");
	puts(p);
	free(p); //根据p中存放的内存起始地址，释放堆申请的空间
	
	printf("p释放后的值%d",p);  //释放后的p存储的内存地址不变，与释放前申请到内存地址一样
	p = NULL;//释放空间之后，p指向堆内存的空间已经被释放了，p中存的内存地址无意义----野指针
//	return 0;
}
