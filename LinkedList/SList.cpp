/* 단순연결리시트(SinglyLinkedList) 구현 */

//class와 struct를 사용하지 않고 메모리를 낭비하지만 빠르게 구현가능한 코드
//메모리누수가 심하기에 실무에서는 사용하지않는것을 권장
#include <bits/stdc++.h>
using namespace std;
const int MX = 100; //const로 상수로 처리
int dat[MX], pre[MX], nxt[MX];
int unused = 1;

//0번지 dump로 예외처리를 가능하게 한다. 데이터가 존재하지않고 다음노드의 주소만 존재
void traverse(){
    int curr = nxt[0];
    while(curr != -1){
        cout << dat[curr] << " -> ";
        curr = nxt[curr]; //다음주소로 계속 최신화
    };
    cout << "None \n";
}

void insert(int addr, int num) {
    dat[unused] = num;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];
    if(nxt[addr] != -1) { //마지막노드뒤에 삽입 시 index[-1]에 접근하기에 설정
        pre[nxt[addr]] = unused;
    }
    nxt[addr] = unused;
    unused ++;
}

void erase(int addr) {
    nxt[pre[addr]] = nxt[addr];
    if(nxt[addr] != -1){
        pre[nxt[addr]] = pre[addr];
    }
}

void insert_test(){
  cout << "****** insert_test *****\n";
  insert(0, 10); // 10(address=1)
  traverse();
  insert(0, 30); // 30(address=2) 10
  traverse();
  insert(2, 40); // 30 40(address=3) 10
  traverse();
  insert(1, 20); // 30 40 10 20(address=4)
  traverse();
  insert(4, 70); // 30 40 10 20 70(address=5)
  traverse();
}

void erase_test(){
  cout << "****** erase_test *****\n";
  erase(1); // 30 40 20 70
  traverse();
  erase(2); // 40 20 70
  traverse();
  erase(4); // 40 70
  traverse();
  erase(5); // 40
  traverse();
}

int main(void) {
    fill(pre, pre + MX, -1);
    fill(nxt, nxt + MX, -1);
    insert_test();
    cout << "\n";
    erase_test();
}