#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)

void print(set<string> &s){
    for(string value : s){
        cout << value << endl;
    }
    cout << endl;

    /* also we can write the above loop as: */
    for(auto it = s.begin(); it != s.end(); ++it){
        cout << (*it) << endl;
    }
}

int main(){
    set<string> s;
    s.insert("abc");
    s.insert("zsdf");
    s.insert("bcd");
    /* auto it = s.find("abc"); */
    /* if(it != s.end()){ */
        /* s.erase(it); */
    /* } */
    s.erase("bcd");
    print(s);
}
