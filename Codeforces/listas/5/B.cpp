//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);   
    unsigned long long n, a, b, bit = 1;

    cin>>n;
    a = n;
    b = 0;

    while(n){
        b |= ~(a&bit);
        n >>= 1;
        bit <<= 1;
    }

    cout<<b<<'\n';
    cout<<(b^a)<<'\n';
    cout<<(8^7)<<'\n';

    return 0;
}