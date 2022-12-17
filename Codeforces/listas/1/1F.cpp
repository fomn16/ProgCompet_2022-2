//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long n, a;
    cin>>n;
    cin>>a;
    if(n%500<=a)
        cout<<"Sim";
    else
        cout<<"Nao";
    return 0;
}