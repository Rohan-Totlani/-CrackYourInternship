#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    char c = s[0];
    int count = 1;
    for(int i = 1; i < s.length(); i++){
        if(s[i]!=s[i-1]){
            cout<<c<<":"<<count<<"\n";
            count = 1;
            c = s[i];
        }
        else count++;
    }
    cout<<c<<":"<<count<<"\n";
}