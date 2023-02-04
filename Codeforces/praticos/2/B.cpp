//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef pair<long,long> seat;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    long n, w;
    char p;
    cin>>n;

    set<seat> intr;
    set<seat> extr;

    seat s;

    for(long i = 1; i <= n; i++){
        cin>>w;
        s = {w, i};
        intr.emplace(s);
    }

    for(long i = 0; i < 2*n; i++){
        cin>>p;

        //extrovert
        if(p == '1'){
            s = (*extr.rbegin());
            extr.erase(s);
        }

        //introvert
        else{
            s = (*intr.begin());
            intr.erase(s);
            extr.emplace(s);
        }
        
        cout<<s.second<< ' ';
    }
    
    return 0;
}