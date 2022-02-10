/*BAEKJOON 10093*/
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio;
    cin.tie(0);
    
    // 두개의 숫자범위 1 ≤ A, B ≤ 1015, A와 B의 차이는 최대 100,000이기에 long long 사용
    long long x,y, num;
    cin >> x >> y;
    if(x > y) swap(x,y);
    num = y - x - 1; //두개의 숫자 사이의 총 갯수
    /*두개의 숫자가 동일할 경우 0개인데 -1가 출력되기에 별도로 처리해야 된다.*/
    if(num < 0) cout << 0;
    else 
    cout << num << "\n";

    for(long long i = 1; i < num + 1; i++){
        cout << x + i << " ";       
    }
}