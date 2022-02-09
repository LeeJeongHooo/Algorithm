/*BAEKJOON 2490*/
#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios::sync_with_stdio;
    cin.tie(0);
    
    //arr index로 string에 맞게 출력
    string s = "DCBAE";
    for(int i = 0; i < 3; i++){
        int arr[5] = { 0, }; //인덱스 0부터 4까지 크기가 5인 배열 생성
        int sum = 0;
        for (int i = 0; i < 4; i++){
        cin >> arr[i];
        }
        for (int i = 0; i < 4; i++){
        sum += arr[i];
        }
        cout << s[sum] << "\n";
    }
}