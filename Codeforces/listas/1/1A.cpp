//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long N, G, F, C;
    cin>> N;
    cin>>G;
    cin>>F;
    cin>>C;
    cout<<min((min(G, F) + C), N);
    return 0;
}