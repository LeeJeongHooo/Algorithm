/*BAEKJOON 5397*/
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while (n--)
    { // test횟수 n이 0이 되면 종료
        string inp;
        cin >> inp;
        list<char> cod;
        auto curs = cod.begin(); // auto로 받아도 상관없다.
        for (auto inpc : inp)
        {
            if (inpc == '<')
            {
                if (curs != cod.begin())
                    curs--;
            }
            else if (inpc == '>')
            {
                if (curs != cod.end())
                {
                    curs++;
                }
            }
            else if (inpc == '-')
            {
                if (curs != cod.begin())
                {
                    curs--;
                    curs = cod.erase(curs);
                }
            }
            else
            {
                cod.insert(curs, inpc);
            }
        }
        for (auto c : cod)
        {
            cout << c;
        }
        cout << "\n";
    }
}