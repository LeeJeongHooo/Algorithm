/* BAEKJOON  4949 */

#include<bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  while(true){
    string s;
    getline(cin, s); //공백인 문자열을 입력받기 위해 getline함수를 사용
    if(s == ".") break;
    stack<char> stk;
    bool isValid = true;
    for(auto c : s){
      if(c == '(' || c == '[') stk.push(c);
      else if(c == ')'){
        if(stk.empty() || stk.top() != '('){
          isValid = false;
          break;
        }
        stk.pop();
      }
      else if(c == ']'){
        if(stk.empty() || stk.top() != '['){
          isValid = false;
          break;
        }
        stk.pop();
      }
    }
    if(!stk.empty()) isValid = false;
    if(isValid) cout << "yes\n";
    else cout << "no\n";
  }
}