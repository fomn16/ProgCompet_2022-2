//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long q, tmp;
    map<long, bool> m;
    cin>>q;
    list<bool> out;

    for(long i = 0; i < q; i++){
        cin>>tmp;
        //adicionar
        if(tmp==1){
            cin>>tmp;
            if(!m.count(tmp))
                m[tmp] = true;
        }
        //consultar
        else{
            cin>>tmp;
            out.emplace_back(m.count(tmp));
        }
    }

    for(bool o : out){
        if(o)
            cout<<"Sim\n";
        else
            cout<<"Nao\n";
    }

    return 0;
}