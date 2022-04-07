/* BAEKJOON 3986 */

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; //입력횟수
    cin >> n;
    int cnt = 0; //좋은단어 count
    while (n--)
    {
        string s;
        cin >> s;
        stack<char> stk;
        /*STACK에 top부분과 같은 단어가 오면 pop 아니면 push*/
        for (auto c : s)
        {
            if (!stk.empty() && stk.top() == c)
            {
                stk.pop();
                continue;
            }
            stk.push(c);
        }
        if (stk.empty())
        {
            cnt++;
        }
    }
    cout << cnt;
}