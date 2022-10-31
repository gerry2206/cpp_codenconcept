#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    map<int, string> m;
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4, "afg"});
    for(auto &pr : m){
        cout << pr.first << " "<< pr.second << "\n";
    }

}
