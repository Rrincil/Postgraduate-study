#include <stdio.h>
int main(){
	//fseek函数  能移动文件的指针
	/**
	 * 1. 移动文件的指针
	 * 		fseek(f,p偏移的字节数,【SEEK_CUR|SEEK_END|SEEK_SET】)
	 * 		返回值为文件指针移动的字节数
	 **/
	FILE *f = fopen("C:\\Users\\apple\\Desktop\\C_File.txt","r+");
	
	char a[200];
	fseek(f,4,SEEK_SET); //将文件指针 从开始偏移4个字节
	while(fread(a,1,30,f)){
		printf("%s",a);
	}
	/**
	 * 2.fftell(f) 返回当前文件指针的位置
	 **/
}
