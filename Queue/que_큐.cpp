/*BAEKJOON 10854*/

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    queue<int> q;

    while (n--)
    {
        string ip;
        cin >> ip;
        if (ip == "push")
        {
            int x;
            cin >> x;
            q.push(x);
        }
        else if (ip == "pop")
        {
            if (q.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << q.front() << "\n"; // front가 pop될 원소
                q.pop();
            }
        }
        else if (ip == "size")
        {
            cout << q.size() << "\n";
        }
        else if (ip == "empty")
        {
            if (q.empty())
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        else if (ip == "front")
        {
            if (q.empty())
                cout << -1 << "\n";
            else
                cout << q.front() << "\n";
        }
        else // back
        {
            if (q.empty())
                cout << -1 << "\n";
            else
                cout << q.back() << "\n";
        }
    }
}