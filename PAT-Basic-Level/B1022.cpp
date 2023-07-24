//
// Created by mario on 2023/7/24.
//
/**
 * 对任意进制间的转换，先转换为10进制数，然后由10进制数转换为其他进制数
 * 注意cin和cout可能导致运行超时问题，替换为scanf、printf
 */
#include <iostream>
using namespace std;
int decimalConversion(int x,int p){
    int y=0,product =1;
    while (x != 0){
        y = y + (x % 10) * product;
        x = x / 10;
        product = product * p;
    }
    return y;
}
int baseConversion(int y,int Q,int z[]){
    int num = 0;
    do {
        z[num++] = y % Q;
        y = y / Q;
    } while (y != 0);
    return num;
}
int A,B,D;
int main(){
    scanf("%d%d%d",&A,&B,&D);
    int temp =A+B;
    int z[40]={0};
    int num =baseConversion(decimalConversion(temp,10),D,z);
    for (int i = num-1; i >=0; --i) {
        printf("%d",z[i]);
    }
    return 0;
}
