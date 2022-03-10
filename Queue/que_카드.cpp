/*BAEKJOON 2164*/

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    queue<int> q;

    for (int i = 1; i <= n; i++)
    {
        q.push(i); // 4 3 2 1(제일 먼저 들어간 원소)
    }

    while (q.size() != 1)
    {
        q.pop();
        int x = q.front();
        q.pop();
        q.push(x);
    }
    cout << q.front(); //원소가 한개밖에 안남기에 back이나 front가 무관
}