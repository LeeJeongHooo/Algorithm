/*BAEKJOON 3273*/
#include<bits/stdc++.h>
using namespace std;

//메모리사용이 높으면 종료코드1을 발생시키는 원인에 대해서 정확히 모르나 전역변수로 선언시 
//문제의 제약이 없음
int arr[1000001] = {0,};
int arr_num[2000001] = {0,};

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,x, cnt = 0;
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