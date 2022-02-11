/*BAEKJOON 10804*/
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[20];
    for(int i = 0; i < 20; i++){
        arr[i] = i + 1; 
    }

    for(int i=0; i<10; i ++){
        int x,y;
        cin >> x >> y;
        reverse(arr + x - 1, arr + y); //c++ reverse함수를 이용해서 arr뒤집기
    }                                  //시작위치 index, 끝나는 위치 -1, 인덱스 시작을 0으로 설정했기 때문
    
    for(int i =0; i<20; i++){
        cout << arr[i] << " ";
    }
}