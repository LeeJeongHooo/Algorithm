/*BAEKJOON 2480*/
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio;
    cin.tie(0);
    int x,y,z;
    cin >> x >> y >> z;
    if(x == y && y == z) {              //모두 같은경우
        cout << 10000 + x * 1000; 
    }
    /*2개만 같은경우*/
    else if (x == y || x == z){        //x와 y만 같은경우나 x와 z만 같은경우
        cout << 1000 + x * 100;
    }
    else if(z == y){                   //z와 y만 같은경우
        cout << 1000 + z * 100;
    }
    else cout << max({x,y,z}) * 100;   //모두 다 다른경우
    return 0;
}