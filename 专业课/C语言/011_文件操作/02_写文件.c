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
	//���ļ�
	FILE *f = fopen("C:\\Users\\apple\\Desktop\\C_File.txt","r+"); //w�����д��   //r+�ɶ���д
	
	if(f != NULL){
		//���ص�f��Ϊ��
		
		
		/**
		 * 1.д���ַ�  fputc('�ַ�',f)
		 **/
		if(fputc('A',f)){
			printf("д��ɹ�");
		}
		printFILE(f);
		
		/**
		 * 2.д���ַ���  fputc("�ַ���",f)  ------\r\n����
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
		 
		 //fwirte() ������
		 int num = 999;
		 fwrite(&num,sizeof(int),1,f);
		 
		 int num2;
		 fwrite(&num2,sizeof(int),1,f);
		 printf("num2��ֵΪ==%d",num2);
		 
		
	}else{
		printf("��ʧ��");
		
	}
}
