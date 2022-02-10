/*BAEKJOON 2587*/
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio;
    cin.tie(0);
    
    int arr[5]; //길이가 5인 배열생성
    int aver = 0;

    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    sort(arr, arr + 5);
    for(int i = 0; i < 5; i++){
        aver += arr[i];
    }
    aver = aver / 5;
    cout << aver << "\n" << arr[2];
}