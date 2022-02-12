/*BAEKJOON 10808*/
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s = "";
    cin >> s;
    int freq[26] = {0,};               //C++11부터 지원해 사용가능 python과 비슷한 문법
    for (auto alpha : s){              //range-based for loops 사용하기
        freq[alpha - 'a']++;
    }
    for (int cnt : freq){
        cout << cnt << ' ';
    }
}    