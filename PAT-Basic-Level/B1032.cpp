//
// Created by mario on 2023/7/20.
//
// B1032
/**
 * 构建一个数组，按照索引进行累加
 */
#include <iostream>
using namespace std;
int number[100001]={0};
int num,grade;
int N;
int main(){
    cin>>N;
    for (int i = 0; i < N; ++i) {
        cin>>num>>grade;
        number[num]+=grade;
    }
    // 比较 O(n)
    int max_index =1;
    for (int i = 2; i <= N; ++i) {
        if (number[i]>number[max_index]) max_index = i;
    }
    cout<<max_index<<" "<<number[max_index];
    return 0;
}
