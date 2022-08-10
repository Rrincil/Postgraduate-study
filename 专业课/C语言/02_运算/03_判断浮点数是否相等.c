#include <stdio.h>
//判断浮点数是否相等
//两数只差是否小于一个精度例如小于0.0001
int main(){
    float a = 1.2;
    float b;
    printf("请输入b的值");
    scanf("%f",&b);
    if((a-b)/10 == 0){
        printf("相等");
    }else{
        printf("不相等");
    }
}
