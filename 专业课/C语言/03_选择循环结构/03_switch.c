#include <stdio.h>
void nixu(unsigned int x,int n){
	int y = 0;
	while(x/10 != 0){
		y += (x%10) * (10^n);
		n--;
	}
	printf("xde逆序为：%d",y);
}
int main(){
	/**
	 * 		switch 用法：
	 * 	switch(表达式){
	 		case 常量|常量表达式1:
	 			语句体1;
	 			break;
	 		case 常量|常量表达式2:
	 			语句体2;
	 			break;
	 		..........
	 		default:
	 			语句体3;
	 			break;
	 	}
	 	
	 	
	 	**注意**：
	 	（1）case 后面不加break 会继续向下执行【执行下面的case后面的条件】，不会跳出循环，直到遇到break;
	 	（2）所有case后面的条件都不符合，则执行default 中的语句。
	 	 (3) 没有case【只要{}中有case,就会执行{}中的语句】 不会执行{}中的语句，但会执行switch(表达式)中的表达式
	 	 (4) default 后面的break 可以省略
	 	 (5) switch 中可以嵌套switch语句
	 	 (6) C语言的switch语句中的条件可以是任意类型，但是由于当是bool类型的时候会出现不可预料的循环，所以一般不用bool类型
	 	
	 **/
	int a;
	scanf("%d",&a);
	switch(a++){ //case 匹配的是表达式的值
		case 3:
			a = a+1;
			break;	
		case 2:
			a *= a;      //case 后面不加break 会继续向下执行，不会跳出循环，直到遇到break;
		case 4:
			a -=2;
			break; 
		default:        //default 后面的break 可以省略
			a = a+2;	
			break;
	}
	
	switch(a+10){
		case 20:
			a--;
		case 19:
			a--; 
	}
	switch (a++) { //不会执行{}中的条件
		defalut:
			a = a+10;
	}

	switch (a++) { //不会执行{}中的条件
		a = a+10;
	}
	
	printf("a的值为%d\n",a);
	
	
	
	/**
	 *  例3.输入年份和月份，输出该月有多少天？ 闰年二月29天，否则2月28天
	 **/
	int x,y;
	printf("请输入年份和月份：");
	scanf("%d%d",&x,&y);
	if(y>=1&&y<=112){
		switch(y){
			case 4:
				printf("30天");
				break;
			case 2:
				switch(( x%100!=0 && x%4==0) || x%400==0){
					case 1:
						printf("29天");
						break;
					case 0:
						printf("28天");
						break;
				}
				break;
			case 6:
				printf("30天");
				break;
			case 9:
				printf("30天");
				break;	
			case 11:
				printf("31天");
				break;		
			default:
				printf("31天");
		}	 	
	}else{
	 	printf("请输入正确的月份");
	}
	printf("\n");
	 /**
	  * 例4 请输入成绩，输出对应等级
	  * 	注意：（1）break结尾 勿漏写
	  * 		（2）注意节点的判断
	  **/
	unsigned int scort;
	printf("请输入你的成绩：");
	scanf("%d",&scort);
	if(scort<=100){
		switch(scort>=60){
			case 1:
				switch(scort>69){
					case 1:
						switch(scort>84){
							case 1:
								printf("A");
								break;
							case 0:
								printf("B");
								break;
						}
						break;
					case 0:
						printf("C");
						break;
				}
				break;
			case 0:
				printf("D");
				break;
		}
	}else{
		printf("请输入正确的分数");
	}
	
	/**
	 * 例5 输入不超过 4位数 的整数，求出他是几位数，并且逆序输出
	 * 	次方 pow10(n) ; pow(10,n); 10^n
	 **/
	
	unsigned int z;
	int m = 0;
	printf("请输入超过4位数的整数");
	scanf("%d",&z);
	switch(z/10 != 0 ){
		case 1:
			switch(z/pow(10,2) != 0){
				case 1:
					switch(z/pow10(3) != 0){
						case 1:
							switch(z/pow10(4) != 0){
								case 1:
									switch(z/pow10(5) ==0 ){
										case 1:
											printf("请输入小于等于4位数的数");
											break;
										case 0://4位数
											m += 4;
											nixu(z,m);
											break;
									}
									break;
								case 0://z是3位数
									m +=3;
									nixu(z,m);
									break;
							}
							break;
						case 0://z是2位数
							m +=2;
							nixu(z,m);	
					}
					break;
				case 0://z是一位数
					m++;			
			}
			break;
		case 0:
			printf("请输入正确的数");
	}
	
}
