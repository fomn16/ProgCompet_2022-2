//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long n,m,c;
    long long tmp;

    cin>>n>>m>>c;

    long a[n];
    long long b[n+1] = {0};

    for(int i = 0; i < n; i++)
        cin>>a[i];

    for(int i = 0; i < m; i++){
        cin>>tmp;
        b[i] += tmp;
        b[i+n-m+1] -= tmp;
    }

    tmp = 0;
    for(int i = 0; i < n; i++){
        tmp += b[i];
        cout<<(a[i] + tmp)%c<<' ';
    }

    return 0;
}