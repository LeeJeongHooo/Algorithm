/* STL stack 사용법 정리코드 */

#include <bits/stdc++.h> //#include<stack>

using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<int> s; //STL stack 선언

    //push함수는 제일 상위에 원소삽입
    s.push(10); 
    s.push(20);
    s.push(30);
    s.push(40);
    //제일 상위원소값 반환
    cout << s.top() << "\n";
    //제일 상위원소 제거
    s.pop();

    s.push(100);
    
    //제일 상위부터 출력하면서 제거
    cout << "This is top ";
    while(s.size()){
        int t = s.top();
        if(s.size() != 1){
            cout  << t << " <- ";
        }
        else cout << t << "\n";
        s.pop();
    }
    //empty함수 stack이 비워있는지 확인 bool값 반환
    if(s.empty()){
        cout <<  "This stack is empty";
    }
}