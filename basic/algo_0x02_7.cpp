/*BAEKJOON 2753*/
#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio;
    cin.tie(0);
    int year;
    cin >> year;
    if ((year%4==0 && year % 100 !=0) || year % 400 == 0)
    cout << 1;
    else 
    cout << 0;
}