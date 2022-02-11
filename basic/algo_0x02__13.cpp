/*BAEKJOON 1267*/
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int size, y = 0,m = 0;
    int *arr = new int[size];
    cin >> size;


    for(int i = 0; i < size; i++){
        cin >> arr[i]; // *(arr + i) 포인터로 받아도 상관없다.  
    }
    //영식 요금제 30초마다 10원 
    for (int i = 0; i < size; i++){
        int n1;
        n1 = arr[i] / 30;
        y += 10 * (n1 + 1);
    }
    //민식 요금제 60초마다 15원
    for (int i = 0; i < size; i++) {
        int n2;
        n2 = arr[i] /60;
        m += 15 * (n2 + 1);
    }
    if(y == m) cout << "Y" << " " << "M" << " " << y;
    else if(y > m) cout << "M" << " " << m;
    else cout << "Y" << " " << y;
}