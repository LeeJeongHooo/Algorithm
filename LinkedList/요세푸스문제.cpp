/*BAEKJOON 1158*/
#include <bits/stdc++.h>
using namespace std;
/*STL연결리스트로 구현하기*/
//제거한 사람의 바로 다음순서에 존재하는 사람을 첫번째로 삼아서 다시 K번째 사람을 제거하는 알고리즘
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    list<int> L;
    for (int i = 1; i < n + 1; i++)
    {
        L.push_back(i);
    }
    auto del = L.begin();
    for (int i = 0; i < k - 1; i++)
    {
        del++;
    }
    cout << '<';
    while (L.size() > 0) // size가 0이 아닐때 까지 반복문
    {
        if (L.size() == 1)
        {
            cout << *del;
            break;
        }
        cout << *del << ", ";
        del = L.erase(del);
        if (del == L.end())
            del = L.begin();
        for (int i = 0; i < k - 1; i++)
        {
            del++;
            if (del == L.end()) //원형연결리스트이기에 반바퀴가 돌았을 때 다시 원상복귀
            {
                del = L.begin();
            }
        }
    }
    cout << '>';
}