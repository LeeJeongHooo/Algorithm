/*BAEKJOON 6198*/
//조금 더 이해가 필요한 코드
//Monotone stack 알고리즘 이해하면 Stack구조 정확히 이해하기

#include<bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<int> s;
    long long cnt = 0;
    int n; 
    cin >> n;
    while(n--){
        long long height; //int의 범위를 넘어가기 때문에 선언
        cin >> height;
        while(!s.empty() && s.top() <= height){
            s.pop();
        }
        cnt += s.size();
        s.push(height);
    }
    cout << cnt;
}