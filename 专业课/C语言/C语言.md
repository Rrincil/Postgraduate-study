# 一、绪论
- 编译==》运行
- 每一个项目编译成一个exe文件
- 内存中使用十六进制存储（AMD|Inter|X86架构是小端存储【地位在前，高位在后（两个字节表示一个字符）】）
- 一位 1bit 存储0|1；一字节 1byte=8位；1kb=1024字节；1Mb=1024kb;1Gb=1024Mb;
- 在磁盘中：1G = 1000 000 000 字节
- 32位：内存从0x00000000开始到0xFFFFFFFF结束 2^32=2^10 * 2 * 10 * 2^10 * 2^2=1024 * 1024 * 1024*4=4G 
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
# 运算符和表达式
* 一切非0值都是真
* 0为false,1为true
- 数字转字符串+48输出
- print("%d",a+48)
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

