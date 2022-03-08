/*BAEKJOON 3015*/
#include<bits/stdc++.h>
using namespace std;
//A와B사이에 사람이 있을 경우 A 또는 B보다 없을때 서로 볼 수 있다.

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long result = 0;
    stack<pair<int, int>> s; //중복된 경우를 고려하기위해 한쌍으로 Stack생성
    int n; 
    cin >> n;
    for(int i = 0; i< n; i++){
        int h;
        cin >> h;
        int count = 1; //키가 중복되는 사람들을 고려하는 경우
        while(!s.empty()){
            if (s.top().first < h){
                result += s.top().second;
                count = 1; //카운트를 다시 1로 초기화 새로운 변수를 넣어야되기 때문
                s.pop();
            }
            else if(s.top().first == h){
                result += s.top().second;
                count = s.top().second + 1;
                s.pop(); //5 3 3 경우 5의 경우도 모두 세야되기 때문에 pop()진행
            }
            else{
                result++;
                break;
            }
        }
        s.push({h, count});
    }
    cout << result << " result";
}