/* STL의 Queueu 사용법 정리 코드 */

#include<bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    queue<int> q;
    //원소 push하기
    q.push(1); // 1
    q.push(2); // (제일 최근에 들어온 원소)2 -> 1(제일 먼저 나가는 원소)
    q.push(3); // 3 -> 2 -> 1
    
    cout << q.size() << "\n"; // Queue에 들어있는 원소 갯수(사이즈)
    
    if(q.empty()) cout << "Queue is empty\n"; //Queue가 비워있는 지 확인
    else cout << "Queue is not empty\n";

    //원소 pop하기
    q.pop(); // 3(back) -> 2(front)
    cout << "front: " << q.front() << "\n"; // 2
    cout << "back: " << q.back() << "\n"; // 3
    
    q.push(4); //4 -> 3 -> 2
    q.pop(); // 4 -> 3
    cout << "front: " << q.front() << "\n"; // 3
}