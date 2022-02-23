/*BEAKJOON 1406*/
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    list<char> tex;
    for (auto c : s) 
    {
        tex.push_back(c);
    }
    auto curs = tex.end(); //문자의 맨뒤에 커서가 존재
    int n;
    cin >> n; //명령어 입력 갯수
    for(int i = 0; i < n; i++)
    {
        char inp;
        cin >> inp;
        if(inp == 'P')
        {
            char c;
            cin >> c;
            tex.insert(curs, c);
        }
        else if(inp == 'L')
        {   
            if(curs != tex.begin())
            curs--;
        }

        else if(inp == 'D')
        {
            if(curs != tex.end())
            curs++;
        }
        else
        {   
            if(curs != tex.begin()){
                curs--;
                curs = tex.erase(curs);
            }     
        }
    } 
    for(auto i : tex){
        cout << i;
    }
}