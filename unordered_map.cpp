/* Given N strings and Q queries.
 * In each query you are given a string 
 * print frequency of that string
 * N <= 10^6
 * |S| <= 100
 * Q <= 10^6
 */

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)

int main(){
    unordered_map<string , int> m;
    int n;
    cin >> n;
    forn{
        string s;
        cin >> s;
        m[s]++;
    }

    int q;
    cin >> q;
    while(q--){
        string s;
        cin >> s;
        cout << m[s] << endl;
    }
}
