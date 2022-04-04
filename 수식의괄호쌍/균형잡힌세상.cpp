/* BAEKJOON  4949 */

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  while (true)
  {
    string s;
    stack<char> stk;
    bool check = true;
    getline(cin, s);
    if (s == ".") //입력이 .일경우 실행 종료
    {
      break;
    }
    for (auto c : s) // c++11이상부터지원가능 s의 문자 하나하나 읽어오기
    {
      if (c == '[' || c == '(')
      {
        stk.push(c);
      }
      else if (c == ']')
      {
        if (stk.empty() || stk.top() != '[') //주의사항 stk가 비워있는 경우 top을 할때 런타임에러가 발생하므로 empty를 먼저확인
        {
          check = false;
          break;
        }
        else stk.pop();
      }
      else if (c == ')')
      {
        if (stk.empty() || stk.top() != '(')
        {
          check = false;
          break;
        }
        else stk.pop();
      }
    }
    if (!stk.empty())
    {
      check = false;
    }
    if (check) //괄호쌍이 맞는 경우
    {
      cout << "yes" << "\n";
    }
    else //괄호쌍 규칙이 어긋난 경우
    {
      cout << "no" << "\n";
    }
  }
}