/*BAEKJOON 2576*/
#include <bits/stdc++.h>
using namespace std;
// x & 1 과 x % 2 는 동일  두개의 비트가 모두 1이어야만 1로 반환 홀수인지 짝수인지 만약하는 연산자 
// x >> 1(오른쪽 시프트) 과  x / 2 동일  오른쪽 shift는 나누기 2 왼쪽 shift는 곱하기 연산자
int main(void) {
    ios::sync_with_stdio;
    cin.tie(0);
    int arr[7];
    int sum = 0;
    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < 7; i++) {
        if ((arr[i] % 2) != 0) {
            sum += arr[i];    
        }
        else arr[i] = 1000;    
    }
    if (sum == 0) {
        cout << -1 << "\n";
    }
    else {
        cout << sum << "\n";
    }
    sort(arr, arr+7);
    if (arr[0] % 2 != 0){
        cout << arr[0] << "\n";
    }
    return 0;
}