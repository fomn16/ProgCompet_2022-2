//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long comparar ( map<long,int> a,  map<long,int> b){
    for(auto l : a){
        if(!b.count(l.first))
            return l.first;
        if(b[l.first] != l.second)
            return l.first;
    }
    return -1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long n, tmp, e1, e2;
    map<long,int> erros, tmp2;
    cin>>n;
    for(long i = 0; i < n; i++){
        cin>>tmp;
        if(erros.count(tmp))
            erros[tmp]++;
        else
            erros.emplace(tmp, 1);
    }
    n--;

    for(long i = 0; i < n; i++){
        cin>>tmp;
        if(tmp2.count(tmp))
            tmp2[tmp]++;
        else
            tmp2.emplace(tmp, 1);
    }
    n--;

    e1 = comparar(erros, tmp2);
    erros.clear();

    for(long i = 0; i < n; i++){
        cin>>tmp;
        if(erros.count(tmp))
            erros[tmp]++;
        else
            erros.emplace(tmp, 1);
    }

    e2 = comparar(tmp2, erros);

    cout<<e1<<'\n'<<e2;
    return 0;
}