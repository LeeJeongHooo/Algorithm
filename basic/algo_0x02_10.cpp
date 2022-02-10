/*BAEKJOON 2576*/
#include <bits/stdc++.h>
using namespace std;

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