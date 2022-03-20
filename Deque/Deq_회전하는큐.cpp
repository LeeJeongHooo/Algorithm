/* BAEKJOON 1021 */

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    deque<int> dq;
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        dq.push_back(i);
    }

    int m;
    cin >> m;
    int cnt = 0;

    while (m--)
    {
        int num;
        cin >> num;
        int idx;
        for (int i = 1; i <= dq.size(); i++)
        {
            if (dq[i] == num)
            {
                idx = i;
                break;
            }
        }

        while (dq.front() != num)
        {
            if (idx < dq.size() - idx)
            {
                dq.push_back(dq.front());
                dq.pop_front();
                cnt++;
            }
            else
            {
                dq.push_front(dq.back());
                dq.pop_back();
                cnt++;
            }
        }
        dq.pop_front();
    }
    cout << cnt;
}