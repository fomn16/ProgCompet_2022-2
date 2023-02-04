//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    long n, k, tmp, tmp2;
    cin>>n>>k;
    set<long>arvores;

    for (long i = 0; i < n; i++){
        cin>>tmp;
        arvores.emplace(tmp);
    }

    tmp2 = tmp = 0;
    for(long l : arvores){
        if(l != tmp2 + 1)
            tmp++;
        tmp2 = l;
    }

    if(tmp2 != k)
        tmp++;

    cout<<tmp;

    return 0;
}