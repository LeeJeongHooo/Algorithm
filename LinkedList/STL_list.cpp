/* STL의 LIST의 기본적인 사용법 */

#include <bits/stdc++.h>
using namespace std;

int main(void){
   ios::sync_with_stdio(0);
   cin.tie(0);
   
   list<int> l = {1,2}; //list 선언 방법
   //iterater는 주소를 나타냄
   //c++11이상에서는 auto t = l.begin();으로 써도 무관
   list<int>::iterator t = l.begin(); // t는 1을 가리키는 중
   l.push_front(10); //맨앞에 10을 삽입
   l.push_back(5); //맨뒤에 5삽입
   l.insert(t,6); //t가 가르키는 주소 앞에 삽입 후 그 주소를 반환

   t++; //t의 다음 주소를 가르리키게 함

   t = l.erase(t); //삭제후 다음 주소에 원소를 반환

   cout << *t << "\n"; //*t는 t가 가리키는 주소이 원소에 접근
   for(auto i : l) cout << i <<  " "; //c++11버전부터 지원
   cout << "\n";
   /*********************************************************/
   //c++11을 지원하지 않을시

   for(list<int>::iterator i = l.begin(); i != l.end(); i++){ //for구문을 이용해서 구현
       cout << *i << " ";
       cout << &i << " ******* ";
    }
}