#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)

int main(){
    set<string> s;
    int n;
    cin >> n;
    forn{
        string str;
        cin >> str; 
        s.insert(str);
    }
    
    for(auto value : s){
        cout << value<< endl; } 
}
