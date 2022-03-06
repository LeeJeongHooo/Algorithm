/*BAEKJOON 17298*/

#include <bits/stdc++.h>
using namespace std;

int arr[1000001];
int nge[1000001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    stack<int> s;
    for(int i = 1; i <= n; i++){
        while(!s.empty() && arr[s.top()] < arr[i]){
            nge[s.top()] = arr[i]; 
            s.pop();
        }
        s.push(i);
    }
    //마지막에 스택이 비워있는 경우는 오큰수가 없기에 -1로 채워준다.
    while(!s.empty()){
        nge[s.top()] = -1;
        s.pop();
    }

    for(int i = 1; i <= n; i++){
        cout << nge[i] << " ";
    }
}