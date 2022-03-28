/* BEAKJOON 5430 */
#include <bits/stdc++.h>
using namespace std;
/*조금 더 효율적인 parsing*/
/**************************************************************************
void parse(string &arr, deque<int> &dq)
{
  int cur = 0; //cur가 0일때는 ,인 경우이기 때문에 dq에 push_back을 하지 않는다.
  for (int i = 1; i < arr.size() - 1; i++) // arr를 string으로 받기 때문에 []두개를 제거하기위해 반복문 범위 설정
  {
    if (arr[i] == ',')
    {
      dq.push_back(cur);
      cout << "Test1: " << cur << "\n";
      cur = 0;
    }
    else
    {
      cur = 10 * cur + (arr[i] - '0'); //숫자가 두자리 수가 될수도 있기 때문에 앞에 10을 곱해준다.
    }
  }
  if (cur != 0)
    dq.push_back(cur);
}
***************************************************************************/
void parse_arr(string &arr, deque<int> &dq)
{
  arr.erase(arr.begin());
  arr.erase(arr.end() - 1);
  stringstream ss(arr);
  string buff;
  while (getline(ss, buff, ','))
  {
    dq.push_back(stoi(buff));
  }
}

void print_result(deque<int> &d)
{
  cout << '[';
  for (int i = 0; i < d.size(); i++)
  {
    cout << d[i];
    if (i + 1 != d.size())
      cout << ',';
  }
  cout << "]\n";
}

int t;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> t;
  while (t--)
  {
    deque<int> dq;
    int rev = 0;
    int n;
    bool isWrong = false; //error가 있는지 확인 dq가 다 삭제되서 비워있는 경우
    string q, arr;
    cin >> q;
    cin >> n;
    cin >> arr;
    parse_arr(arr, dq);
    for (char c : q)
    {
      if (c == 'R')
        rev = 1 - rev;
      else
      {
        if (dq.empty())
        {
          isWrong = true;
          break;
        }
        if (!rev)
          dq.pop_front();
        else
          dq.pop_back();
      }
    }
    if (isWrong)
      cout << "error\n";
    else
    {
      if (rev)
        reverse(dq.begin(), dq.end());

      print_result(dq);
    }
  }
}