//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int x = 1, y = 1, id = 0, chLen;
int n,m,k;
int dir = 1;
bool last = false;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m>>k;
    chLen = (n*m)/k;

    while(id < n*m){
        if(!(id%chLen) && k){
            if(id)
                cout<<'\n';
            if(k>1)
                cout<<chLen<<' ';
            else
                cout<<((n*m) - id)<<' ';
            k--;
        }
        cout<<y<<' '<<x<<' ';
        if((x==1 && dir == -1) || (x == m && dir == 1)){
            y++;
            dir = -dir;
        }
        else
            x += dir;
        id++;
    }

    return 0;
}