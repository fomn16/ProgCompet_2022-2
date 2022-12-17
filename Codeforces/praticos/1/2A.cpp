//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int myAbs(int a){
    if(a>=0)
        return a;
    return -a;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long n, r, m, p;
    cin>>n>>r>>m>>p;

    if(((double)r)/(double)n > ((double)p)/(double)m)
        cout<<"Promocao";
    else
        cout<<"Enganacao";
    return 0;
}