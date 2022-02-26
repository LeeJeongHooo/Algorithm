/* 배열로 Queue구조 구현 */
/*단순연결리스트로도 queue를 만들 수 있으나 배열로 만드는 것이 더 쉽기 때문에
배열을 이용해서 구현*/
#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int head = 0, tail = 0;

void push(int x)
{
}

void pop()
{
}

int front()
{
}

int back()
{
}

void test()
{
    push(10);
    push(20);
    push(30);
    cout << front() << '\n'; // 10
    cout << back() << '\n';  // 30
    pop();
    pop();
    push(15);
    push(25);
    cout << front() << '\n'; // 30
    cout << back() << '\n';  // 25
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    test();
}