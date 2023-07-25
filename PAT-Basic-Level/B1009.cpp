//
// Created by mario on 2023/7/25.
//
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char s[81];
char words[90][90];
int num=0;
int r=0,h=0;
int main(){
    cin.getline(s,81);
    int len = strlen(s);
    for (int i = 0; i < len; ++i) {
        if (s[i] != ' '){
            words[r][h++] = s[i];
        } else{
            words[r][h] = '\0';
            num++;
            r++;
            h = 0;
        }
    }
    for (int i = num; i >= 0; --i) {
        printf("%s",words[i]);
        if (i != 0) printf(" ");
    }
    return 0;
}
