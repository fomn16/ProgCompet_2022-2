//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long m, n, tmp, tmp2, tmp3;
    cin>>n>>m;
    long long setores [n + 1] = {0}, rq[n+2] = {0}, out = 0;

    for(long long i = 1; i <= n; i++){
        cin>>tmp;
    }

    for(long long i = 0; i < q; i++){
        cin>>tmp>>tmp2>>tmp3;
        rq[tmp] += tmp3;
        rq[tmp2+1] -= tmp3;
    }

    for(long long i = 1; i <= n; i++){
        out[i] = out[i-1] + rq[i];
        if(out[i] >= t)
            terrenos++;
    }

    cout<<terrenos<<'\n';
    return 0;
}