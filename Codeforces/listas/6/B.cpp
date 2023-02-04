//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string s;
int pos[7] = {0}, out, len, m = 0;
int d [7] = {1000000,100000,10000,1000,100,10,1};
bool e;

bool verPosAndUpdate(int i){
    if(pos[i] > 0){
        pos[i]--;
        out += d[i+7-len];
        return true;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>s;

    len = s.size();

    for(int i = 0; i < len; i++){
        out = s[i] - '0';
        pos[i] = out;
        if(out > m)
            m = out;
    }

    cout<<m<<'\n';

    for(int i = 0; i < 10; i++){
        e = false;
        out = 0;
        for(int j = 0; j < len; j++)
            e |= verPosAndUpdate(j);
        
        if(!e)
            return 0;
            
        cout<<out<<' ';
    }
    return 0;
}