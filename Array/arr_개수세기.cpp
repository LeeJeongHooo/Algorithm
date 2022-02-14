/*BAEKJOON 10807*/
#include<bits/stdc++.h>
using namespace std;

int arr[201]; //전역변수로 선언 시 초기화 할 필요가 없다.
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, v, cnt = 0; //지역변수이기에 다른값이 들어있기 때문에 초기화
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> v;
    for(int i = 0; i < n; i++){
        if(arr[i] == v){
            cnt++;
        }
    }
    cout << cnt;
}