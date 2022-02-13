/*BAEKJOON 3273*/
#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,x, cnt = 0;
    int arr[1000001] = {0,};
    int arr_num[2000001] = {0,};
    cin >> n;
    for(int i = 0; i < n; i ++){
        cin >> arr[i];
    }
    cin >> x;

    for(int i = 0; i < n; i++){
        if(arr_num[x - arr[i]]) cnt++;
        arr_num[arr[i]] = 1;
    }
    cout << cnt;
}