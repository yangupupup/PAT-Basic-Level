//
// Created by mario on 2023/7/26.
//
// B1025
/**
 * 思路：开辟足够大的空间，记录有效数据量
 * 对于每轮数据，进行内部排序
 * 需要确认每轮数据的范围!!!
 */
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
struct Student{
    char id[15];
    int score;
    int location_number;
    int local_rank;
} stu[30010];
int cmp(Student a,Student b){
    if (a.score != b.score) return a.score > b.score;
    else return strcmp(a.id,b.id) < 0 ;
}
int N;
int K;
int num = 0;
int main(){
    // 输入
    scanf("%d",&N);
    for (int i = 1; i <= N; ++i) {
        scanf("%d",&K);
        for (int j = 1; j <= K; ++j) {
            scanf("%s%d",stu[num].id,&stu[num].score);
            stu[num].location_number = i;
            num++;
        }
        sort(stu+num-K,stu+num,cmp);
        stu[num-K].local_rank = 1;
        for (int j = num - K +1; j <num; ++j) {
            if (stu[j].score == stu[j-1].score) stu[j].local_rank = stu[j-1].local_rank;
            else stu[j].local_rank = j + 1 - (num - K);
        }
    }
    // 输出
    printf("%d\n",num);
    sort(stu,stu+num,cmp);

    int r = 1;
    for (int i = 0; i < num; ++i) {
        if (i>0 && stu[i].score != stu[i-1].score) r = i + 1;
        printf("%s ",stu[i].id);
        printf("%d %d %d\n",r,stu[i].location_number,stu[i].local_rank);
    }
    return 0;
}