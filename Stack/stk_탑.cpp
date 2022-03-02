/*BAEKJOON 2493*/

#include <bits/stdc++.h>
using namespace std;
#define F fisrt
#define S second

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    stack<pair<int, int>> tower; //스택을 한쌍으로 선언가능
    tower.push({10000000},0);
    for(int i = 1; i <= n; i++){
        int h;
        cin >> h;
        while(tower.top().fisrt < h){
            tower.pop();
        }
        cout << tower.top().second << " ";
        tower.push({h, i});
    }
}