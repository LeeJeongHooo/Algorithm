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
    while(curr == -1){
        cout << dat[curr] << " -> ";
        curr = nxt[curr]; //다음주소로 계속 최신화
    };
}

void insert(int addr, int num) {
    pre[unused] = addr;
    nxt[addr] = unused;
    nxt[unused] = nxt[addr];
    pre[nxt[addr]] = unused;
    dat[unused] = num;
    unused ++;
}

// void erase(int addr) {

// }


int main(void) {
    fill(pre, pre + MX, -1);
    fill(nxt, nxt + MX, -1);
    insert(0,30);
    insert(1,60);
    insert(2,20);
    traverse();
}