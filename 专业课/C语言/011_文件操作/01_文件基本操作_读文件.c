#include <stdio.h>
int main(){
	/**
	 * 1.打开文件	 FILE *f = fopen("文件路径【绝对路径|相对路径】","读写方式");
	 * 		fopen() (1).打开成功返回文件指针;(2)打开失败返回NULL
	 * 		FILE 类型是 C语言自定义的结构体类型，结构体中定义了文件信息
	 **/
	 FILE *f = fopen("C:\\Users\\apple\\Desktop\\C_File.txt","r");//打开桌面文件
	 
	
	 
	 if(f != NULL){
	 	/**
		  * 3. 操作文件 ---------文件以 EOF 结尾       #define EOF -1
		  * 	(1).fgetc(f)每次读取一个字符，读取完之后，f指针会向后偏移一个单位
		  * 	(2).fgets(接收返回值的数组名，返回的个数，f) 读取一行;读取为空，返回NULL
		  * 	(3) fread(接收返回值的数组名，每次读取的个数，一共读取多少个，f) 读取指定文件 返回实际读取的大小 
		  **/
		  
		  
		/**
		 * (1).fgetc(f)
		 **/
//		char c = fgetc(f);
//		printf("%c\n",c);
//		char c2 = fgetc(f);
//		printf("%c\n",c2);
//		char str = fgetc(f);
//		//循环全部读取
//		while(str != EOF){
//			printf("%c",str);
//			str = fgetc(f);
//		}
//		
		
		
		
		/**
		 * 2.2).fgets(
		 **/
		char d[200];
//		char *dd  = fgets(d,20,f); //此时指针f 指向下一行
//		puts(d);
//		printf("fgets的返回值为==%s\n",dd);
		//循环换行读取
		while(fgets(d,200,f)){
			printf("fets循环输出全部==%s",d);
			//puts(d);
		}
	 	
	 	
	 	
	 	
	 	 //memset(str,0,sizeof(str));清空缓存
	 	/**
		  * 3.(3) fread()
		  **/
		  char p3[100];//只能定义数组
		  //fread(p3,2,20,f);
		  //循环读取所有的字符
		  while(fread(p3,2,20,f)){
		  	printf("%s",p3);
		  }
	 }else{
	 	printf("打开失败！");
	 }
	 
	 
	 
	 
	 /**
	  * 2.关闭文件     fclose(f);
	  **/
	  fclose(f);
}
