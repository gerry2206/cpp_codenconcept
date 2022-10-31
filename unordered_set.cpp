/* Given N string and Q queries.
 * In each query you are given a string 
 * print yes if the string is present else no
 *
 * N <= 10^6
 * |S| <= 100
 * Q <= 10^6
 *
 * */

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)

int main(){
    unordered_set<string> s;
    int n;
    cin >> n;
    forn{
        string str;
        cin >> str;
        s.insert(str);
    }
    int q;
    cin >> q;
    while(q--){
        string str;
        cin >> str;
        if(s.find(str) == s.end()) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

}
