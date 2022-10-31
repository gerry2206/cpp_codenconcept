#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)

void print(multiset<string> &s){
    for(string value : s){
        cout << value << endl;
    }
}
int main(){
    multiset<string> s;
    s.insert("abc");
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");

    auto it = s.find("abc");
    if(it != s.end()){
        s.erase(it);
    }
    
    /* it will delete only one element as the iterator is passed here */

    /* s. erase("abc"); */
    
    /* it will delete all the element */ 
    print(s);
}
