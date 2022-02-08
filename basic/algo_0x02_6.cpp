/*BAEKJOON 2752*/
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio;
    cin.tie(0);
    int a,b,c;
    cin >> a >> b >> c;
    int ma,mi,mid;
    ma = max({a,b,c});
    mi = min({a,b,c});
    mid = a + b + c - ma - mi;
    cout << mi << ' ' << mid << ' ' << ma;
    return 0;
}    