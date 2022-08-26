#include <stdio.h>
typedef struct{
	char name[20];
	char sex[4];
	int no;
}stu;
int main(){
	stu s1 = {"张三","男",18};
	FILE *f = fopen("C:\\Users\\apple\\Desktop\\C_File.txt","r+");
	fwrite(&s1,sizeof(s1),1,f);
	//fwrite(&s1,sizeof(s1),1,f);
	char str[20] ={0};
	while(fread(str,1,20,f)){
		printf("%s",str);
	}
	rewind(f)//将文件指针重置到文件的开头
}
