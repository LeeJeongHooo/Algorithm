#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n; //testcase수
    string s1,s2;
    for(int i = 0; i< n; i++){
        bool ans = true;
        int alpha1[26] = {0,}; //영어 소문자 26개
        int alpha2[26] = {0,};
        cin >> s1 >> s2;
        for(auto c : s1){
            alpha1[c - 'a']++;
        }
        for(auto c : s2){
            alpha2[c - 'a']++;
        }
        for(int i = 0; i < 26; i++){
            if(alpha1[i] != alpha2[i]){
                ans = false;   
            }
        }
        if(ans) cout << "Possible" << "\n";
        else cout << "Impossible" << "\n";
    }
}