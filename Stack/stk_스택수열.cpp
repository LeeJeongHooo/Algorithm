/*BAEKJOON 1874*/

/*스택 (stack)은 기본적인 자료구조 중 하나로, 컴퓨터 프로그램을 작성할 때 자주 이용되는 개념이다. 
스택은 자료를 넣는 (push) 입구와 자료를 뽑는 (pop) 입구가 같아 
제일 나중에 들어간 자료가 제일 먼저 나오는 (LIFO, Last in First out) 특성을 가지고 있다.*/
/************************************************************************************************************/

/*문제에서 요구하는 것은 스택에서 pop에서 나온값도 고려를 해야된다는 것에 주의*/
#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    stack<int> s;
    int n;
    cin >> n;
    string str;
    int cnt = 1;
    while(n--){
        int x;
        cin >> x;
        while(cnt <= x){
            s.push(cnt);
            cnt ++;
            str += "+\n";
        }
        if(s.top() != x){
            cout << "NO\n"; //수열을 이룰 수 없으면 바로 No출력후 종료
            return 0; 
        }
        s.pop();
        str += "-\n";
    }
    cout << str;
}