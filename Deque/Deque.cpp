/* 배열로 Deque 구현하기 */
#include<bits/stdc++.h>
using namespace std;

//배열로 구현하는 것이 링크드리스트로 구현하는 것보다 쉽다.
//양쪽 방향에서 모두 삽입/제거 연산이 가능하기 때문에 배열의 크기와 
//head,tail의 값을 아래와 같이 설정한다.
const int MX = 1000005;
int dat[2*MX+1];
int head = MX, tail = MX;

void push_front(int x){ //맨 앞에 삽입연산
    head--;
    dat[head] = x;   
}

void push_back(int x){ //맨 뒤에 삽입연산
    dat[tail] = x;
    tail ++;
}

void pop_front(){ //맨 앞 제거 연산
    head ++;
}

void pop_back(){ //맨 뒤 제거 연산
    tail --;
}

int front(){
    return dat[head];
}

int back(){
    return dat[tail - 1];
}

void test(){
  push_back(30); // 30
  cout << front() << '\n'; // 30
  cout << back() << '\n'; // 30
  push_front(25); // 25 30
  push_back(12); // 25 30 12
  cout << back() << '\n'; // 12
  push_back(62); // 25 30 12 62
  pop_front(); // 30 12 62
  cout << front() << '\n'; // 30
  pop_front(); // 12 62
  cout << back() << '\n'; // 62
}

int main(void){
  test();
}