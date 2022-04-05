/* BAEKJOON 10799 */

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //만약 (가 나온 후 바로 )가 나온다면 레이저를 의미한다.
    //앞을 비교해 레이저인지 막대인지 구별하는게 key point
    string s;
    cin >> s;
    stack<char> stk;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            stk.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (s[i - 1] == '(')
            {
                stk.pop();
                cnt += stk.size();
            }
            else
            { //막대기의 끝일 경우 하나씩 더해주고 stk에서 '('를 비워주면서 아직 남은 막대기를 최산화
                stk.pop();
                cnt++;
            }
        }
    }
    cout << cnt;
}