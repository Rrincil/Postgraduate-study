#include <stdio.h>
int main(){
	/**
	 * 1.���ļ�	 FILE *f = fopen("�ļ�·��������·��|���·����","��д��ʽ");
	 * 		fopen() (1).�򿪳ɹ������ļ�ָ��;(2)��ʧ�ܷ���NULL
	 * 		FILE ������ C�����Զ���Ľṹ�����ͣ��ṹ���ж������ļ���Ϣ
	 **/
	 FILE *f = fopen("C:\\Users\\apple\\Desktop\\C_File.txt","r");//�������ļ�
	 
	
	 
	 if(f != NULL){
	 	/**
		  * 3. �����ļ� ---------�ļ��� EOF ��β       #define EOF -1
		  * 	(1).fgetc(f)ÿ�ζ�ȡһ���ַ�����ȡ��֮��fָ������ƫ��һ����λ
		  * 	(2).fgets(���շ���ֵ�������������صĸ�����f) ��ȡһ��;��ȡΪ�գ�����NULL
		  * 	(3) fread(���շ���ֵ����������ÿ�ζ�ȡ�ĸ�����һ����ȡ���ٸ���f) ��ȡָ���ļ� ����ʵ�ʶ�ȡ�Ĵ�С 
		  **/
		  
		  
		/**
		 * (1).fgetc(f)
		 **/
//		char c = fgetc(f);
//		printf("%c\n",c);
//		char c2 = fgetc(f);
//		printf("%c\n",c2);
//		char str = fgetc(f);
//		//ѭ��ȫ����ȡ
//		while(str != EOF){
//			printf("%c",str);
//			str = fgetc(f);
//		}
//		
		
		
		
		/**
		 * 2.2).fgets(
		 **/
		char d[200];
//		char *dd  = fgets(d,20,f); //��ʱָ��f ָ����һ��
//		puts(d);
//		printf("fgets�ķ���ֵΪ==%s\n",dd);
		//ѭ�����ж�ȡ
		while(fgets(d,200,f)){
			printf("fetsѭ�����ȫ��==%s",d);
			//puts(d);
		}
	 	
	 	
	 	
	 	
	 	 //memset(str,0,sizeof(str));��ջ���
	 	/**
		  * 3.(3) fread()
		  **/
		  char p3[100];//ֻ�ܶ�������
		  //fread(p3,2,20,f);
		  //ѭ����ȡ���е��ַ�
		  while(fread(p3,2,20,f)){
		  	printf("%s",p3);
		  }
	 }else{
	 	printf("��ʧ�ܣ�");
	 }
	 
	 
	 
	 
	 /**
	  * 2.�ر��ļ�     fclose(f);
	  **/
	  fclose(f);
}
