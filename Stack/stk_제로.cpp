/*BAEKJOON 10773*/

#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    stack<int> s;
    int K;
    cin >> K;
    for(int i = 0; i < K; i++){
        int x;
        cin >> x;
        if(x == 0){
            if(!s.empty())
            s.pop();
        }
        else{
            s.push(x);
        }
    }
    int sum = 0;
    while(!s.empty()){
        sum += s.top();
        s.pop();
    }
    cout << sum;
}