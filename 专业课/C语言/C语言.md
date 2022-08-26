# 一、绪论
- 编译==》运行
- 每一个项目编译成一个exe文件
- 内存中使用十六进制存储（AMD|Inter|X86架构是小端存储【地位在前，高位在后（两个字节表示一个字符）】）
- 一位 1bit 存储0|1；一字节 1byte=8位；1kb=1024字节；1Mb=1024kb;1Gb=1024Mb;
- 在磁盘中：1G = 1000 000 000 字节
- 32位：内存从0x00000000开始到0xFFFFFFFF结束 2^32=2^10 * 2 * 10 * 2^10 * 2^2=1024 * 1024 * 1024*4=4G 
- 内存堆栈存储分为：大端【内存地址左到右读取】、小端【内存地址右到左读取（从低到高存储）】存储
# 二、数据类型
* 标识符：字母数字+下划线；第一个字符不能是数字；不能是关键字
* <span style="color:red;font-weight:800">变量区分大小写</span>
## 2.1 基本数据类型
1. 整型 int short long
2. 字符型 char
3. 实型（浮点型）
   1. 单精度 float
   2. 双精度 double
### 2.1.1 变量
```c
#include <stdio.h> //引用头文件
int mian(){
  int x = 8;
  char x2 = 'x';
  float x3 = 8.0;
  double x4 = 8.80;
}
```
### 2.1.2 常量【符号常量】
1. 关键字：#define 常量名 常量值;【不可变】
```c
#include <stdio.h>
#define MaxSize 10;
#define Pi 10;

int main(){
  printf("%d\n",Pi);
}
```
2. 字符串常量【通过字符数组来存取运算】
* <span style="color:red;font-weight:800">每个字符串常量在内存中都会加一个'\0'的结束标志
* 例如“china”在内存中：【c|h|i|n|a|\0】
* <span style="color:red;font-weight:800">在输出时\0不显示----'\0'的ASSIC码的值就是0
* <span style="color:red;font-weight:800">不能把字符串常量赋值给字符型变量
```c
#include <stdio.h>
int main(){
	printf("name=%s","Rrincil");
}
```
### 2.1.3 整型变量的不同进制表示
#### 1 进制转换
1. 二进制 0~9
2. 八进制 0~7
3. 十六进制 0~9==>a~f 
##### (1)十进制和二进制转换
1. 十进制转二进制
* 用除法，除于2，从底向顶写
```c
124==>

```
2. 二进制转十进制
* 用乘法，2^n【n是后面的位数】
```c
11111==>2^4+2^3+2^2+2^1+2^0 = 31

```
##### (2)十进制和八进制【0开头：086】转换
1. 十进制转八进制
* 用除法，除于8，从底向顶写
```c
124==>0111 1100

```
2. 二进制转十进制
* 用乘法，2^n【n是后面的位数】
```c
0001 1111==>2^4+2^3+2^2+2^1+2^0 = 31

```
##### (3)十进制和十六进制【0x开头：0x67】转换
1. 十进制转十六进制【先转二进制再转十六进制】
* 把二进制写成8位，分割成两部分算，
```c
124==>7C

```
2. 二进制转十进制
* 用乘法，2^n【n是后面的位数】
```c
11111==>2^4+2^3+2^2+2^1+2^0 = 31

```
## 2.2 构造类型
1. 数组类型
2. 结构类型 struct
3. 联合类型 union
4. 枚举类型 enum
## 2.3 指针类型
- 指针 *
## 2.4 空类型
- 空类型（无值类） void
# 三、输入输出
## (1). scanf("%d%d",&a,&b);getchar()输入
- 混合输入时在%c前加空格
- %s 于%c读取的时候中间需要加 空格
```c
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
```
## (2) printf();putchar()输出
```c
int main(){
   int a = 0x76;
   printf("%d",a);//%d以十进制输出
}
```
# 四、运算符和表达式
* 一切非0值都是真
* 0为false,1为true
- 数字转字符串+48输出
- print("%d",a+48)
- 以下优先级从高到底
- 逻辑与高于逻辑非
## 算数运算符
* +-*/%
```c
#include <stdio.h>
int main(){
	int h = 5;
short h0 = 3;
long hh = 1;
float h1 = 5.0;
float h2 = h/2;//2.0
float h3 = h1/2;//2.5
printf("%f\n%f\n",h2,h3);
}
```
## 关系运算符
* 关系运算符不能连续判断例如0<a<2是错的，应该为a>0&&a<1
> >= <= == !=
```c
#include <stdio.h>
int main(){
	int a = 18;
	if(a<=10&&a>=2){
		printf("ok");
	}else{
		printf("false");
	}
}
```
## 逻辑运算符
* &&与； ||或； !非
* 逻辑表达式只有真假
```c
#include <stdio.h>
int main(){
   int a =5;
   printf("%d",!a);//值为0--非0常数的非为0
   printf("%d",!!a);值为1

}
```
## 赋值运算符
* 表达式的值存在与运算过程中
* 等号左边只能放变量
```c
#include <stdio.h>
int main(){
   int a;
   a +=3;
   a = a+3;
   a /=3;
   a *=3;
}

```
## 条件运算符
## 逗号运算符
* （（表达式1），（表达式2））最后一个表达式为真，则逗号表达式为真，反之为假---while,for循环中
```c
#include <stdio.h>
int main(){
   int a = 2;
   while((a%10==0),(a%2==0)){
      printf("a是二的倍数");
   }
}
```
## 自增自减运算符
* 单目运算符从右到左
* 前加加，前减减直接先右后左计算
* 后加加减减分成两步
* j = a++先赋值再a自增1; j=++a a先自增1再赋值;
```c
#include <stdio.h>
int main(){
   int i; 
   scanf("%d",&i);  //输入 i=2
   int j1 = i++; //先增1再赋值
   int j2 = ++i;//先赋值再增1
   if(j1 > 0){
      printf("j为正数");
      printf("%d",j); //j=3
   }else if(j2 >0){
      printf("j为正数");
      printf("%d",j);//j=2
   }
   while(i-- > 0){
      j = --i;
   }
   printf("j为正数");
   printf("%d",j);//j =1
}
```
# 五、选择循环结构
## 5.1 if 判断表达式
* 99%放关系|逻辑表达式，1%直接放值
* if else 就近原则配对（未加括号）
## 5.2 while循环表达式
* 注意死循环
## 5.3 for循环表达式
* for(int i=0;i<10;i++){}
* for循环中三个表达式都可以省略
## 5.4 switch表达式
```c
#include <stdio.h>
int main(){
   int a =0;
   switch(a):
      case as
}
```
## 5.5 continue语句
* 结束本次<span style="color:red;font-weight:800;">循环</span>

## 5.6 break语句
* <span style="color:red;font-weight:800;">终止循环</span>
# 六、数组
* 具有相同数据类型的数据
* 在定义数组时，空间大小就确定下来了。
* 数组下表从0开始
* 使用过程中需要保留原始数据
* 数组名中存放的是数组的起始地址
## 6.1 一维数组
* 类型 数组名【<span style="color:red;font-weight:800;">常量表达式</span>】----int a[10]
* 如果在定义数组时，数据类型前面加上关键字static，数组变成了静态数组；或者把数组定义在函数的外面，成为全局变量数组，这时数组元素的值自动赋值为0。
```c
#include <stdio.h>
#define N 3
int main(){
   int a[10];
   int b[N] = {1,2,3};
   int c[10] = {0};//初始化为全为0的数组
   int d[] = {0,1,4,5};//编译器自动推断 数组的长度（数组的空间大小）
   for(int i=0;i<a.length();i++){
      printf("%d",a[i]);
   }

}
```
### (1)访问越界问题
* 访问了不属于你自己的空间，容易把其他值改掉
```c
#include <stdio.h>
#define N 3
int main(){
   //访问越界
   int j = 10;
   int i[2] = {0};
   int x = 3;
   //微软在内存存储中【栈的形式】 有8字节的保护空间，所以赋值两次
   i[3] = 2;
   i[4] = 5;
   
   i[5] = 22;
   printf("j=%d",j); //打印j=22
}
```
### (1)数组传递
```c
#include <stdio.h>
#define N 3
//数组传递
void printArray(int a[],int len){
	for(int i=0;i<len;i++){
		printf("a[%d]=%d\n",i,a[i]);
	}
}
int main(){
   int a[10]; //有残留的内存数值-脏数据   微软中为 cc cc cc cc
   int b[N] = {1,2,3};
   int c[10] = {0};//初始化为全为0的数组
   int d[] = {0,1,4,5};//编译器自动推断 数组的长度（数组的空间大小）
   printArray(a,9);
}
```
## 6.2 字符型数组
* char a[3] ={0};
* 用来存储字符串  char a[5] = "hello";
* 以字符串定义的 输出用%s
* char c[10] 最多存9个字符 最有一个是结束符'\0'
* char a[100];//char a2= a; <span style="color:red;font-weight:800;">字符串数组不能直接赋值,for循环赋值</span>
```c
#include <stdio.h>
int main(){
	char a[3] ={0,'a','2'};
	printf("%c\n%c\n",a[1],a[2]);
	//初识化字符串
	char b0[3] = {'h','o','w'};
	char b[8] = "hello";
	printf("a=%s\nb=%s\n",b0,b);
}
```
### (1)scanf("%s")读取字符串
* scanf("%s%s",a,b);会忽略空格
* 不能输入带有空格的字符串
* 输入时可以不用取地址，数组名就是首地址
```c
#include <stdio.h>
int main(){
//读取字符串
char x[10],y[10];
scanf("%s%s",x,y);
printf("%s---%s",x,y);
}
```
### (2)gets("%s")读取字符串 puts输出字符串
* 输入带空格的一行字符串----'\n'换成'\0'结束
* gets(字符数组名);------char *gets(*str)
* 字符数组的数组名中存放的是字符数组的起始地址（值的类型为字符指针类型）
```c
#include <stdio.h>
int main(){
//读取字符串
char x[10],y[10];
scanf("%s%s",x,y);
printf("%s---%s",x,y);
}
```
### （4）gets()与fgets的区别
* fgets(a，sizeof(a),stdin);--fgets(字符串数组名，字节大小，标准输入)
* fgets除了读取空格之外还会读取\n，并把\n放到字符数组中
* 输入的时候把\n换成\0
```c
#include <stdio.h>
int main(){
    int a[100];
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    a[len-1] = '\0';//或者a[len-1] = 0；--0的ASCII码是\0
    puts(a);
    return 0;
}
```
### （5）字符数组的传递
```c
#include <stdio.h>
void printArray(char a[]){
	printf("%s\n",a);
	int i = 0; //int i,j = 0; 会抛出异常
	int j = 0;
	while(a[i]!='\0'){ //while(a[i])||while(a[i]!=0)   '/0' = 0 非0就为真
		printf("%c\n",a[i]);
		i++;
	}
	//改变字符 大写变小写+32 小写变大写-32
	while(a[j]!=0){
		a[j] -=32;
		printf("%c",a[j]);
		j++;
	}
}
int main(){
	//读取字符串
	char x[10],y[10];
	scanf("%s%s",x,y);
	printf("%s---%s\n",x,y);
	printArray(x);
	return 0; //main函数的返回值
}
```
### （6）字符数组操作函数
* strlen strcpy strcmp strcat等
```c
#include <stdio.h>
#include <string.h>  //使用字符串函数的头文件
int main(){
	char a[10] = "hello";
	char b[10];
	char c[10] = "hollo";
	//字符长度 strlen(a)
	printf("%d\n",strlen(a)); 
	
	//字符串拷贝 strcpy(to,from)
	strcpy(b,a); 
	strcpy(c,"nihao");
	puts(b);
	puts(c);
	
	// int  = strcmp(a,b) 判断两个字符串对应位置 ASCII值是否相等（一直比较到不相等的时候），如果相等返回0，不相等（1）a>b返回1;(2)a<b返回-1
	int x  = strcmp(a,b);  
	int y  = strcmp(a,c);
	int y2 = strcmp("ssxx","ssxo");
	printf("x==%d,y==%d,y2==%d\n",x,y,y2);
	
	//strcat(a,b) 拼接字符串 把b字符串拼接到a上----注意数组长度---返回字符指针
	strcat(a,c);
	printf("%s",a);
}
```
## 6.2 浮点型型数组
## 6.3 二维数组
1. 二维数组是一个特殊的一维数组
2. 元素排列的顺序是按行排列的。
3. 在内存中没有多维，各个元素是连续存放的，表现为线性
4. 使用数组时可以是常量，也可以是变量
5. 类型 数组名[行][列]
6. 注意： 多维数组做为函数参数时，只可以省略第一维的大小【第二维大小必须定义】，后面的维数要写出来。
### (1).二位数组的定义和使用
* 类比于一维数组的定义和初始化
* 初始化二分行初始化
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * 二维数组的定义使用
 * 		【表格】
 **/
 
 //输出二维数组
 void printArray(int x,int y, int a[][y]){
 	for(int i=0;i<x;i++){
 		for(int j=0;j<y;j++){
 			printf("%d ",a[i][j]);
 		}
 		printf("\n");
 	}
 }
 
 
/**
 * 1. 二维数组初始化 --------多维数组做为函数参数时，只可以省略第一维的大小，后面的维数要写出来。
 * 2. 分行初始化 int a[2][3] = { {1,2,4} ,{5,6,7} }
 **/
void InitArray(int y,int a[][y],int x){
	srand((unsigned int)time(NULL));
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			a[i][j] = rand()%10;
		}
	}
	printArray(x,y,a);
}

int main(){
	/**
	 * 1.写在一个{}中，自动按行分，
	 **/
	static int a0[2][3]; //static 修饰全为0
	int a[4][30];//4个班级，每个班30个同学----初始化未赋值，随机数---残留值
	InitArray(30,a,4);
	
	int b[2][3] = {1,2,4}; //部分赋值----补零
	int b1[2][3] = {1,0};//部分赋值----补零
	int b2[2][3] = {1,2,4,5,6,7};//整体赋值
	
	printArray(2,3,a0); 
	printf("\n=========================\n");
	
	/**
	 * 2.分行初始化==========int a[2][3] = { {1,2,4} ,{5,6,7} }
	 **/
	 int b3[2][3] = { {1,2,4} ,{5,6,7} };
	 printArray(2,3,b3); //1,2,4;0,0,0
	 printf("\n=========================\n");
	 int b4[2][3] = { {2,4} ,{5,6},{8,9} };//局部初始化
	 printArray(2,3,b4); //2,4,0;5,6,0
	 
	/**
	 * 3. 如果对二维数组全部元素赋初始值，则第1维大小可以省略，第2维不能省略
	 **/
	 int c[][3] = {2,3,4,5,7,9}; //3列6个数则为2行 ==== int c[2][3]
	 int c2[][3] = {{1,3},{2,5},{4,8}}; //3行3列局部赋值
}
```
# 七、指针
## 7.1 指针的本质
- 指针变量的作用是保存某个变量的地址
- 指针的大小是32位4个字节；64位8个字节
- *p表示解引用
- 需要间接访问变量的值的时候使用指针
## 7. 2 指针的使用场景
### (1)指针的传递
```c
#include <stdio.h>
void change(int x){ //局部变量
	printf("%d\n",x); //i的值赋值给x
	x = 10;
	printf("%d\n",x); //
}

void change2(int *y){ //形参存的实参地址----p指针变量存放的实参地址。

	*y = 20;//*P 解引用*p是实参的值
}
int main(){
	
	/**
	 * 1. 函数调用的值传递 ----------把形参的值赋给实参
	 **/
	int i = 2; //局部变量
	printf("i改变之前i=%d\n",i);
	change(i); //把形参的值赋给实参 --- 把i的值赋值给x；
	printf("i改变之后i=%d\n",i);
	
	
	
	/**
	 * 2. 传递的参数改为，传递地址-----------用到指针
	 * 		例如在数组中 数组名的传递就是传递地址---数组名为首地址
	 **/
	int j = 3;
	change2(&j); //实参传递给形参的是：实参的地址-----------此时函数调用改变就直接改变的是实参的值
	printf("j改变之后的值j=%d",j);
	return 0;
}s
```
### （2）指针的偏移
```c
#include <stdio.h>
int main(){
	/**
	 * 1. 指针变量的偏移---使用指针的偏移读取数组元素
	 * 		int *p;
	 * 		p+1 表示增加一个基类型长度：例如int型指针p+1表示增加一个int长度即：增加4个字节；
	 * 		如果是char 类型p+1表示：增加一个字节 *(p+i)
	 **/
	int a[3] = {1,3,5};
	
	int *p;//定义整型指针
	p = a; //指向数组起始地址
	printf("a[0]的大小是%d\n",*p);
	printf("a[1]的大小是%d\n",*(p+1));
	
	printf("-----------------------------\n");
	
	//指针偏移循环输出数组元素
	for(int i = 0;i<3;i++){
		printf("a[%d]的大小是%d\n",i,*(p+i));
	}
	
	/**
	 * 2.内存分为3种权限：掌握两种：可读，可写：-----指针变量赋值问题可能导致内存读写权限问题
	 **/
}
```
### (3)指针与自增自减运算符（初试不掌握，机试少数答案遇到）
```c
#include <stdio.h>
int main(){
	int a[3] = {1,4,6};
	int *p;
	int j;
	p = a; //把数组的起始地址赋值给指针p
	int m = *p+1;
	/**
	 * 1. i++ 先赋值再自增1 
	 * 因为*与++优先级相同，所以从右向左计算；
	 * 		m = (*P)+1 = 2
	 * 		*p的值即a[0]的值，因为p中存放的地址指向a[0] 先赋值j=*p= a[0] =1
	 * 		再自增1 此时从右到左，先对p增1，即对p+1个基类型大小
	 * 		此时p指向a[1] ----*p = a[1] = 4;
	 * 		
	 * 		所以最后a[0] = *p = 4
	 **/
	j = *p++;  
	printf("a[0]=%d,j=%d,*p=%d,m=%d\n",a[0],j,*p,m); //1,1,4 ,2
	
	/**
	 * 2.有()时，()优先级最高
	 * 		先赋值j = *p = a[1] = 4;
	 * 		*p自增1 *p = 5;
	 *  	a[1]因为*p指向a[1]所以 a[1] = *p = 5 ------------********************
	 * 
	 **/
	j = (*p)++;
	printf("a[1]=%d,j=%d,*p=%d,m=%d\n",a[1],j,*p,m); //1,4,5 ,2
	
	
	/**
	 * 3. 此时p的地址指向a[1]    p[0] = a[1] = 5
	 * 		j = p[0] = 5
	 * 		a[0] 不变 a[0] = 1;
	 * 		p[0]自增1 *p = p[0]= 5+1 = 6;
	 * 		m 不变 m =2;
	 * 		*P指向a[1] 所以a[1] = *p = 6
	 **/
	j = p[0]++; 
	printf("a[0]=%d,a[1]=%d,j=%d,*p=%d,m=%d\n",a[0],a[1],j,*p,m); //1,6,5 ,6,2
	
	
	
	/**
	 * 4. 此时p的地址指向a[1]    p[1] = a[2] = 6
	 * 		j = p[1] = 6
	 * 		a[0] 不变 a[0] = 1;
	 * 		p[1]自增1 a[2] = p[1] = 6+1=7
	 * 		*p = p[0]= 6;
	 * 		m 不变 m =2;
	 * 		*P指向a[1] 所以a[1] = *p = 6
	 * 		
	 **/
	j = p[1]++; 
	printf("a[0]=%d,a[1]=%d,a[2]=%d,j=%d,*p=%d,m=%d",a[0],a[1],a[2],j,*p,m); //1,6,7,6 ,6,2	
	
}
```
## 7.3 指针的基本使用
```c
#include <stdio.h>
int main(){
	int a = 23;
	//整型指针 存整型数据的地址
	int *p = &a;
	printf("a的地址为%d",p);
}

```
## 7.4取地址操作符和取值操作符
* 取地址操作符（也叫引用）为  &
* 取值操作符（解引用）  *
   * p 表示p中存放的地址，在该地址上的值
* &与*的优先级相同且都是自右向左方向结合。
    * &*p = i的地址；//一般不这样写
    * *&p =  p的值；//一般不这样写无意义
```c
#include <stdio.h>
int main(){
	
	int *x,y,z;//表示定义一个指针类型x,两个整型y,z
	int *x1,*y1,*z1;//定义三个指针类型
	
	int i = 23;
	int *p = &i;
	printf("i的值为%d",i);//直接访问
	printf("i的值为%d",*p);//间接访问
	
	printf("i的地址为%d",&i);
	printf("i的地址为%d",p); //指针存的变量的地址
}
```
## 7.5指针和一维数组
* 函数调用的本质是值传递（实参赋值给形参）
```c
#include <stdio.h>
#include <string.h>
void change(char x[]){  //形参放的是指针类型，并不是数组类型, x存放的是地址

	for(int i=0;i<strlen(x);i++){
		printf("a[%d]=%c\n",i,x[i]);   //本质是指针的偏移
	}
}

void change2(char *x){  //形参放的是指针类型，并不是数组类型
	for(int i=0;i<strlen(x);i++){
		printf("a[%d]=%c\n",i,x[i]);
	}
}
int main(){
	char c[10] = "nihaoya";
//	char a = 'A';
	//change(&a);
	change(c);
}
```
## 7.6指针与动态内存申请
* 数组长度固定是因为其定义的整型，浮点型，字符型变量，数组变量都在栈空间中，而栈空间的大小在编译时是固定的
* 如果要使空间大小不确定则需要使用堆空间
* 栈的效率高，动态分配malloc向堆空间申请
* malloc(int 字节大小) 向堆空间申请空间 
* 申请到的这一片连续空间的起始地址【返回值是起始地址】
* 返回值的类型是 void * 无类型指针。需要强转才可使用 
```c
#include <stdio.h>
int main(){
    char *P;
    p = (char *)malloc(20); //需要强制转换
    
    free(p);//需要释放
}
```
* 注意：申请的空间访问越界问题：p = malloc(20); p[20]【访问越界】
* 申请的空间使用完之后需要释放 free(p)
* 释放空间的时候p不可以偏移【根据p中起始地址查找的对空间，p不可偏移】
```C
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
```
## 7.7 栈空间和堆空间的差异
* 堆空间动态申请的内存不会随着函数的执行而释放，只有free 才会释放
* 栈空间中 ：函数执行完成之后会自动释放栈空间内存
```c
#include <stdio.h>
char * printchar(){
	//栈空间中申请内存
	char a[] ="nihaoya";
	puts(a);
	return a;
}
char* printchar2(){
	//在堆空间中动态申请内存
	char *p;
	p = (char *)malloc(20);
	strcpy(p,"hello Rrincil");
	puts(p);
	return p;
}
int main(){
	char *p;
	p = printchar(); //栈空间中 ：函数执行完成之后会自动释放栈空间内存
	puts(p);  //无法打印出字符串
	
	char *p2; //堆空间动态申请的内存不会随着函数的执行而释放，
	p2 = printchar2(); //仍然会打印一遍字符串
	puts(p2);
	
	return 0;
}
``` 
## 7.8 字符指针与字符数组的初始化
* char *p="hello"与char a[10]="hello"的区别
```c
#include <stdio.h>
int main(){
	char *p="hello"; //把字符串常量区中的"hello"常量的首地址赋值给p
	char a[10]="hello";//等价于 strcpy(p,"hello") 把hello每个字符放在栈空间，可以对其读写
	a[0] = 'H';
	printf("%c\n",a[0]);
	printf("%c\n",p[0]);
//	p[0] = 'H'; //不可以对字符串常量区的字符进行修改------抛出异常
	p = "word"; //将字符串word的地址赋值给p
//	a = "word";//非法
	
	printf("%c\n",a[0]);
	printf("%c\n",p[0]);	
	return 0;
	
}
```
## 7.9 二级指针
- 只服务于一级指针的传递和偏移
### （1）. 二级指针的传递 （了解c++的引用）
* 二级指针：存一级指针本身内存起始地址：用来方便查找一级指针
```c
#include <stdio.h>
void change(int **x,int *y){
	
	*x = y;
	
}
int main(){
	 int a =10;
	 int *p = &a;
	 int **p2 = &p; //存一级指针本身内存起始地址：用来方便查找一级指针
	 
	 int i = 1;
	 int j = 2;
	 int *p0 = &i;
	 int *p1 = &j;
	 printf("*p0=%d,*p1=%d\n",*p0,*p1);
	 
	 change(&p0,p1);//把p0在内存中的地址传入再*解引用 拿到p0中存放的地址，再改变为pi中存放的地址 
	 printf("*p0=%d,*p1=%d",*p0,*p1);
	 
}
```
# 八、函数
* 若大的程序分为若干个程序模块
* 使用子程序实现模块的功能，而子程序用函数来实现
## 8.1 函数的声明、定义和调用
* 主函数调用子函数
* 子函数之间可以相互调用
* 同一函数可以被多个或者一个函数调用
## 8.2 函数的嵌套调用
## 8.3 函数递归调用
```c
#include <stdio.h>
void peint(int n,int m){
	/**
	 * 用递归计算n!
	 **/
	m = m*n;
	n--;
	if(n>0){
		peint(n,m);
	}else{
		printf("%d",m);
	}
}
int main(){
	int n;
	int m =1;
	scanf("%d",&n);
	peint(n,m);
	
}
```
## 8.4 变量及函数的作用域
### （1）全局变量和局部变量
* 函数外定义的叫全局变量
```c

```
# 九、结构体
## 9.0 结构体位域【结构体所占大小空间】
## 9.1 结构体的定义，引用和初始化
1. 结构体的声明使用
     * struct 结构体名 {成员列表};
```c
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
```
## 9.2结构体指针
* *运算符是 结构体变量.结构体成员 使用的
* ->运算符 结构体定义的指针变量使用的
```c
#include <stdio.h>
struct animal{
	char name[10];
	int num;
	float weight;
	
};
int main(){
	/**
	 * 1. 结构体指针
	 **/
	 struct animal cat ={"elefent",10,30};
	 struct animal *p; //定义结构体指针
	 p = &cat;
	 printf("%d\n",(*p).num); //*p.num出错---因为优先级的问题 .与[]与()的优先级高于单目运算符，最高级
	 printf("%s,%d,%.2f\n",(*p).name,(*p).num,(*p).weight);//(1)
	 printf("%s,%d,%.2f\n",p->name,p->num,p->weight);//等同于（1）的写法
	 
	 /**
	  * 2.结构体指针在结构体数组中的偏移
	  **/
	 struct animal arr0[2] = {"tom",10,60.2,"cat",20,68.5};
	 p = arr0;//p指向arro数组的首地址
	 int x;
	 x = p->num++;  //num++ 先赋值 后自增1   p[0].num =10 = p->num = x; num再自增1 p->num = p[0].num = 11;
	 printf("%d,%d\n",x,p->num);
	 
	 x = p++->num;  //p++先赋值 后自增1 x = p->num = p[0].num =11 =x; p->num = p+1->num = p[1].num = 20;
	 printf("%d,%d",x,p->num);
	 
}
```
# 十、c++ 的引用 &
```c
#include <stdio.h>
#include <stdlib.h>
void change(int &x){  //& C++的引用
	printf("%d\n",x);
	x++;
	printf("%d\n",x);
}

/**
 * 1. 在C语言中
 **/
//void change(int *p){
//	*p++;
//}
//int main(){
//	int a = 10;
//	change(&a);
//}

void change_y(int* &y){     //在子函数中操作y和主函数操作p一致  //change(类型 &y) 引用 调用的时候: 类型 p; change(p);
	y = (int *)malloc(20);    //1. 加头文件<stdlib.h> 2.注意强制转换类型
	y[0] = 7;
}
/**
 * 2. 在C语言中  二级指针的使用
 **/
//void change_y(int **p){
//	*p = (int *)malloc(20);
//}
//int main(){
//	int *p = NULL;
//	change_y(&p);
//}

int main(){
	int a =10;
	change(a);
	printf("%d\n",a);
	
	//指针的转换
	int *p = NULL;
	change_y(p);
	printf("%d\n",p[0]);
}
```
# 十一、typedef的使用
* (typedefine)----typedef
* 使用typedef关键字给定义的结构体 起别名
```c
#include <stdio.h>
/**
 * 1. typedef的使用
 **/
typedef struct student{
	char name[10];
	int age;
} stu, *stup;     //给结构体起别名 stu在声明使用的时候相当于struct student     stup在声明使用的时候等价于 struct student *
int main(){
	stu s = {"tom",22}; //stu s = {}---------struct student s ={};
	puts(s.name);
	

	stup p; //stu p; ------stu *p-------struct student *p;
	
	p = &s;
	printf("%s\n",p->name);
	
	stu s2[] = {"cat",11}; //定义结构体数组
	p = s2;
	printf("%d",p->age);
}
```
# 十二、文件操作
## （1）写文件
```c
```
# 十三、共用体
- 
# 十四、枚举