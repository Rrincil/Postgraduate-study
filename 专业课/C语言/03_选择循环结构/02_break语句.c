#include <stdio.h>
int main(){
    //计算1~100之和，当和大于1000的时候结束
    int a,m = 0;
    for(int i =0;i<=100;1++){
        m = m + i;
        if(m>100){
        printf("i为",i);
            break;
        }
    }
}