//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    float n;
    cin>>n;
    
    n = cbrt(n);
    if(n == (int)n)
        cout<<(int)n;
    else
        cout<<-1;

    return 0;
}