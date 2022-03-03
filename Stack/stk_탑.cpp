/*BAEKJOON 2493*/

#include <bits/stdc++.h>
using namespace std;

stack<pair<int, int>> tower; //스택을 한쌍으로 선언가능
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        int h;
        cin >> h;
        if(tower.empty()){
            tower.push({h, i});
            cout << 0 << " ";
            continue;
        }
        while(tower.top().first < h){
            tower.pop();
            if(tower.empty()){
                break;
            }
        }
        if(tower.empty()){
            cout << 0 << " ";
        }
        else{
            cout << tower.top().second << " ";
        }
        tower.push({h, i});
    }
}