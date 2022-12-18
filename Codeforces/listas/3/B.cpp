//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k1, k2;

    cin>>n>>k1>>k2;

    long a[n], tmp, tot = k1+k2;
    list<long> erros;

    for (int i = 0; i < n; i++){
        cin>>tmp;
        a[i] = tmp;
    }

    for (int i = 0; i < n; i++){
        cin>>tmp;
        if(tmp>a[i])
            erros.push_back(tmp - a[i]);
        else
            erros.push_back(a[i] - tmp);
    }

    erros.sort();

    while(tot){
        tmp = erros.back();
        cout<<tmp<<' ';
        erros.pop_back();
        if(tmp == 0)
            erros.push_back(1);
        else
            erros.push_back(tmp - 1);
        erros.sort();
        tot--;
    }

    tmp = 0;
    for (long i : erros){
        tmp += i*i;
    }

    cout<<tmp;
    return 0;
}