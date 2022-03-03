/*BAEKJOON 6198*/

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
        long long height;
        cin >> height;
        while(!s.empty() && s.top() <= height){
            s.pop();
        }
        cnt += s.size();
        s.push(height);
    }
    cout << cnt;
}