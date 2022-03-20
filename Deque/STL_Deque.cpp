/* STL의 Deque 간단한 사용법 정리 */

//Deque는 vector을 단점을 보안하기 위해서 만들어진 container이다.
//Deque vector와 마찬가지로 배열기반의 구조
//Sequence container이기에 반복자로 순회가 가능하다. 
//하지만 원래의 Deque라는 자료구조는 맨앞과 맨뒤에만 빼고 접근이 불가능한 자료구조이다.
#include<bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    deque<int> dq; //데크 선언
    dq.push_front(1); // 1
    dq.push_front(3); // 3 1
    dq.push_back(2); // 3 1 2
    dq.push_back(4); // 3 1 2 4

    for(auto i: dq) {
        if (i == (*(dq.end()-1)))
        {
            cout << i;
        }
        else cout << i << "->";
    }
    
    cout << "\nBefore c++ 11 : ";
    for(deque<int>::iterator l = dq.begin(); l != dq.end(); l++){
        cout << *l << " ";
    }
    
    cout << "\nfront: "; 
    cout << dq.front(); // 3
    cout << "\nback: ";
    cout << dq.back(); // 4

    dq.pop_back(); // 3 1 2
    dq.pop_front(); // 1 2

    cout << "\nfront: "; 
    cout << dq.front(); // 1
    cout << "\nback: ";
    cout << dq.back(); // 2

    cout << "\n";
    
    //Vector처럼 인덱스로 접근가능
    dq[1] = 3; // 1 3
    dq[0] = 2; // 2 3
    dq.insert(dq.begin() + 1, 30); // 2 30 3
    dq.insert(dq.begin() + 3, 40); // 2 30 3 40
    
    for(auto i: dq) {
        if (i == (*(dq.end()-1)))
        {
            cout << i;
            cout << "\n";
        }
        else cout << i << "->";
    } //2 30 3 40

    dq.erase(dq.begin() + 2); // 2 30 40

    cout << "index2: " <<dq[2]; //40
}