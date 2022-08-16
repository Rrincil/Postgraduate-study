#include <stdio.h>
struct student{ //结构体声明  【struct 结构体名 {结构体成员};】
	int num; //结构体成员
	char name[20];
	char sex;
}; //结构体的声明加;  可以放在main()里面，外面都行
int main(){
	//结构体所占字节大小为28 !=4+20+1  因为内存存在对其  对其是为了提高cpu访问内存效率
	printf("%d\n-",sizeof(struct student));
	
	/**
	 * 1.结构体变量
	 **/
	struct student s= {20,"jdkjdk",'M'}; //定义,初始化结构体变量
	//访问结构体成员  s.成员变量
	printf("%d,%s,%c\n",s.num,s.name,s.sex); 
	
	/**
	 *  2. 结构体数组的声明定义、使用
	 * 
	 **/
	 struct student arr0[2] = {10,"tom",'M',20,"cat",'w'};
	 
	 struct student arr[3];
//	 arr[0].name = "ddd";
	  
	 //读取结构体数组
	 for(int i= 0 ;i<3;i++){
	 	scanf("%d%s %c",&arr[i].num,arr[i].name,arr[i].sex); //%s 于%c读取的时候中间需要加 空格---混合输入%c前加空格
	 	
	 }
	 for(int j = 0,k=0;j<3,k<2;j++,k++){
	 	printf("num=%d name=%s sex=%c\n",arr0[j].num,arr0[j].name,arr0[j].sex);
	 	printf("num=%d name=%s sex=%c\n",arr[j].num,arr[j].name,arr[j].sex);
	 }
}
