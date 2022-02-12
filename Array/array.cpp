/*기본적인배열의구조*/

#include <bits/stdc++.h>
using namespace std;
//배열삽입연산함수구현
void insert(int idx, int num, int arr[], int& len){
    //길이는 한칸씩 증가 arr[] 오른쪽으로 한칸씩 미룬다.
       for (int i = len - 1; i > idx - 1; i --){
           arr[i+1] = arr[i];
       }
       arr[idx] = num;
       len += 1;
}
//배열삭제연산함수구현
void erase(int idx, int arr[], int& len){
    for (int i = idx + 1; i < len + 1; i ++){
        arr[i - 1] = arr[i];
    }
    len -= 1;
}

void printArr(int arr[], int& len){
  for(int i = 0; i < len; i++) cout << arr[i] << ' ';
  cout << "\n\n";
}

/*Test case----------------------------------------------------------------------*/
void insert_test(){
  cout << "***** insert_test *****\n";
  int arr[10] = {10, 20, 30};
  int len = 3;
  insert(3, 40, arr, len); // 10 20 30 40
  printArr(arr, len);
  insert(1, 50, arr, len); // 10 50 20 30 40
  printArr(arr, len);
  insert(0, 15, arr, len); // 15 10 50 20 30 40
  printArr(arr, len);
}

void erase_test(){
  cout << "***** erase_test *****\n";
  int arr[10] = {10, 50, 40, 30, 70, 20};
  int len = 6;
  erase(4, arr, len); // 10 50 40 30 20
  printArr(arr, len);
  erase(1, arr, len); // 10 40 30 20
  printArr(arr, len);
  erase(3, arr, len); // 10 40 30
  printArr(arr, len);
}

int main(void) {
  insert_test();
  erase_test();
}