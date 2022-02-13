/*BAEKJOON 2577*/
#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int num_arr[10] = {0,};
    int  a,b,c;
    cin >> a >> b >> c;
    string result = to_string(a * b * c); //문자열로 받기
    for(auto c: result) {
        num_arr[c - '0']++;     
    }
    for (int i = 0; i < 10; i++){
        cout << num_arr[i] << "\n";
    }
    //자리수별로 확인가능하는 코드
    // while (result>0) {
    //num_arr[result%10]++;
    //result/=10;}
}