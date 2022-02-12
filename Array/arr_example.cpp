#include <bits/stdc++.h>
using namespace std;
//O(n)의 시간만에 처리하기 위해 만든 함수
int func(int arr[],int n); //함수 선언
//두개의 숫자의 합이 100인 존재하면 1반환 없다면 0을 반환
int main(void) {
    int arr[3] = {1,52,48};
    cout << func(arr, 3);
}
//함수정의
int func(int arr[], int  n){
    int cnt[101] = {0,};
    for (int i = 0; i < n; i++){
        if(cnt[100 - arr[i]]){
            return 1;
        }
        cnt[arr[i]] = 1;
    }
    return 0;
}