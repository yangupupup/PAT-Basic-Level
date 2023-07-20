//
// Created by mario on 2023/7/20.
//
// B1036
/**
 * 简单图形输出：找到规律直接输出
 */
#include <iostream>
using namespace std;
int N;
int row;
char C;
int main(){
    cin>>N>>C;
    // 第1行
    for (int i = 0; i < N; ++i) {
        cout<<C;
    }
    cout<<endl;

    if (N % 2 ==0){
        row = N / 2;
    } else{
        row = N / 2 + 1;
    }

    // 第2～row-1行
    for (int i = 0; i < row-2; ++i) {
        for (int j = 1; j <= N; ++j) {
            if (j == 1 || j == N){
                cout<<C;
            } else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    // 第N行
    for (int i = 0; i < N; ++i) {
        cout<<C;
    }
    cout<<endl;
    return 0;
}
