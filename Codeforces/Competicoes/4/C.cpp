//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int t, n, l, r, out;
char tmp;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>t;

    for(int i = 0; i < t; i++){
        cin>>n;
        vector<char> v;
        for(int j = 0; j < n; j++){
            cin>>tmp;
            v.emplace_back(tmp);
        }
        
        l = n/2 - 1;
        r = n/2;
        out = 0;
        if(n%2)
            r++;

        for(int j = 1; r < n && l >= 0; j++){
            if(v[l] == v[r]){
                out=2*j;
            }
            l--;
            r++;
        }

        if(n%2)
            out++;

        cout<<out<<'\n';
    }

    return 0;
}