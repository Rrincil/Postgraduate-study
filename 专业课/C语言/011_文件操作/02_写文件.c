#include <stdio.h>
#include <string.h>
void printFILE(FILE *f){
	char str[200];
	while(fgets(str,200,f)){
		printf("%s",str);
		puts(str);
		
	}
	char str2[100];
	while(fread(str2,1,100,f)){
		puts(str2);
	}
}
int main(){
	//打开文件
	FILE *f = fopen("C:\\Users\\apple\\Desktop\\C_File.txt","r+"); //w是清空写入   //r+可读可写
	
	if(f != NULL){
		//返回的f不为空
		
		
		/**
		 * 1.写入字符  fputc('字符',f)
		 **/
		if(fputc('A',f)){
			printf("写入成功");
		}
		printFILE(f);
		
		/**
		 * 2.写入字符串  fputc("字符串",f)  ------\r\n换行
		 **/		
		char a[30] = "nihaoya";
		fputs(a,f);
		
		char *p = "hahaha\r\nheiheihei";
		fputs(p,f);
		printFILE(f);
		
		
		/**
		 * 3. fwrite() 
		 **/
		 char c[20] = "nihaoyahhahaha";
		 
		 fwrite(c,2,strlen(c),f);
		 printFILE(f);
		 
		 //fwirte() 存整数
		 int num = 999;
		 fwrite(&num,sizeof(int),1,f);
		 
		 int num2;
		 fwrite(&num2,sizeof(int),1,f);
		 printf("num2的值为==%d",num2);
		 
		
	}else{
		printf("打开失败");
		
	}
}
