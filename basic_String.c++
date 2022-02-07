#include <iostream>
#include <string>
using namespace std;

/*공백인 문자열을 받기*/

int main() {
    ios::sync_with_stdio(0);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin.tie(nullptr);
    string s;
    getline(cin, s); //getline을 쓰기 위해서는 두번째 파라미터를 string변수로 넘겨주어야 된다.
    cout<<s;

    return (0);
}