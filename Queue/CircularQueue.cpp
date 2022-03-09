/*메모리 낭비를 최적화 하는 배열을 원형으로 연결하여 Queue를 구현*/

#include<bits/stdc++.h>
using namespace std;

const int MX = 5; //원형큐확인을 위해 MX의 범위를 낮게 설정
int dat[MX];
int head = 0, tail = 0;

void push(int x)
{
    if(tail == MX - 1){
        dat[tail] = x;
        tail = 0;
    }
    else{
        dat[tail++] = x;
    }
}

void pop()
{   
    head ++;
    if(head == MX){
        head = 0;
    }
}

int front()
{
    return dat[head];
}

int back()
{
    return dat[tail - 1];
}

void test()
{
    for(int i = 1; i <= 5; i++){
        push(i);
    }
    // 5 4 3 2 1
    pop(); // 5 4 3 2
    pop(); // 5 4 3
    push(10); // 10 5 4 3

    cout << "front: " << front() << "\n"; //3
    cout << "back: " << back() << "\n"; //10
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    test();
    return 0;
}