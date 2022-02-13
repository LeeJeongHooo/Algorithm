/*BAEKJOON 1475*/
#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, a[10] = {0,}, ans = 1;
    cin >> n;
    string num = to_string(n);
    for(auto c : num){
        a[c - '0']++;
    }
    for(int i = 0; i < 10; i++){
        if(i == 6 || i == 9) continue;
        ans = max(ans, a[i]);
    }
    ans = max(ans, (a[6]+ a[9] + 1)/2);
    cout << ans;
}