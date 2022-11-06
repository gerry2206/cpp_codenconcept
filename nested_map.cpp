#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)

int main(){
    map<pair<string, string>,vector<int>> m;
    
    //input will be
    //
    //3         test case
    //a b 4     -> first name, last name , mark given for nos of sub
    //1 2 3 4   -> given marks
    //c d 2
    //1 2
    //d f 3
    //2 3 4

    int n;
    cin >> n;
    forn{
        string fn, ln;
        int ct;
        cin >> fn >> ln >> ct;
        for(int j = 0 ; j < ct ; ++j){
            int x;
            cin >> x;
            m[{fn,ln}].push_back(x);
        }

    }
    for(auto &pr : m){
        auto &full_name = pr.first;
        auto &list = pr.second;

        cout << full_name.first << " " << full_name.second << endl;
        cout << list.size() << endl;
        for( auto &element : list ){
            cout << element << " ";
        }
        cout << endl;

    }

}
