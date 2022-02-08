#include <iostream>
using namespace std;

int main (void) {
    ios::sync_with_stdio(0);
    // cin.tie(0);
    int N, X;   
    int a[10005];
    cin >> N >> X;
    for( int i = 0; i < N; i++) {
        cin >> a[i]; 
    }
    for (int i = 0; i < N; i++) {
        if (a[i] < X) {
            cout << a[i] <<" ";
        }
    }
    return 0;
}