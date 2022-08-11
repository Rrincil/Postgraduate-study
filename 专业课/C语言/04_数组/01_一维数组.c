#include <stdio.h>
#define N 3
int main(){
   int a[10];
   int b[N] = {1,2,3};
   int c[10] = {0};//初始化为全为0的数组
   int d[] = {0,1,4,5};//编译器自动推断 数组的长度（数组的空间大小）
   for(int i=0;i<a.length;i++){
      printf("%d",a[i]);
   }
}
