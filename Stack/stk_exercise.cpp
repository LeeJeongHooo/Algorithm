/*BAEKJOON 10828*/

#include <bits/stdc++.h>
using namespace std;

const int MX = 100005;
int stk[MX]; //전역변수선언이기에 초기화 X
int pos;

void push(int x) //제일 상위에 원소 삽입
{
    stk[pos] = x;
    pos++;
}

void pop() //제일 상위에 있는 원소 제거
{
    pos--;
}

int top() //제일 상위에 있는 원소 확인
{
    return stk[pos - 1];
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == "push")
        {
            int dat;
            cin >> dat;
            push(dat);
        }
        else if (s == "pop")
        {
            if (pos)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << top() << "\n";
                pop();
            }
        }
        else if (s == "size")
        {
            cout << pos << "\n";
        }
        else if (s == "empty")
        {
            if (pos)
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << 0 << "\n";
            }
        }
        else
        { // top
            if (pos)
            {
                cout << -1 << "\n";
            }
            else
                cout << top() << "\n";
        }
    }
}