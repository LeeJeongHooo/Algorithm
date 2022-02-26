/* 배열로 Stack 구현하기 */
//스택은 하나의 입구로 추가 및 제거가 가능 
//원칙적으로 제일 상위에 있는 원소 말고는 확인/변경을 불가능하다는 것을 무조건으로 기억
#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int x) //제일 상위에 원소 삽입
{
    dat[pos] = x;
    pos ++;
}

void pop() //제일 상위에 있는 원소 제거
{
    pos --;

}

int top() //제일 상위에 있는 원소 확인
{
    return dat[pos-1];
}

void test() //testcase
{
    push(5);
    push(4);
    push(3);
    cout << top() << '\n'; // 3
    pop();
    pop();
    cout << top() << '\n'; // 5
    push(10);
    push(12);
    cout << top() << '\n'; // 12
    pop();
    cout << top() << '\n'; // 10
}

int main(void)
{   
    ios::sync_with_stdio(0);
    cin.tie(0);
    test();
}