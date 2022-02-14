/*BAEKJOON 1919*/
#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s1, s2;
    int alpha1[26] = {0,};
    int alpha2[26] = {0,};
    int cnt = 0;

    cin >> s1 >> s2;
    for (auto c: s1){
        alpha1[c - 'a']++;
    }
    for(auto c: s2){
        alpha2[c - 'a']++;
    }
    for (int i = 0; i < 26; i++){
        cnt += abs(alpha1[i] - alpha2[i]);
    }
    cout << cnt;
}