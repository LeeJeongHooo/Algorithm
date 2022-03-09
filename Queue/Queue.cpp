/* 배열로 Queue구조 구현 */
/*단순연결리스트로도 queue를 만들 수 있으나 배열로 만드는 것이 더 쉽기 때문에
배열을 이용해서 구현*/

/*선형 배열의 큐로 구현 코딩테스트의 경우 입력N의 범위가 정해져있기에 메모리 낭비를 감안하고 구현*/
/*실무에서는 되도록 STL QUEUE나 따로 큐를 구현하실 원형 QUEUE를 구현하는게 효율적*/

#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX]; //if 원형큐를 구현할시 head나 tail이 MX가 될경우 0으로 만드는 것만 고려하면 된다.
int head = 0, tail = 0;

void push(int x)
{
    dat[tail] = x;
    tail++;
}

void pop()
{
    head++;
}

int front() //제일 맨앞쪽 제일 먼저 나가는 원소 
{
    return dat[head];
}

int back() //제일 뒷쪽 제일 최근에 추가된 원소
{
    return dat[tail - 1];
}

void test() //Testcase
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