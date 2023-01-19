//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long n, q, tmp, tmp2;
    cin>>n>>q;
    long rq[n+1], out[q];

    rq[0] = 0;

    for(long i = 1; i <= n; i++){
        cin>>tmp;
        rq[i] = rq[i-1] + tmp;
    }

    for(long i = 0; i < q; i++){
        cin>>tmp>>tmp2;
        out[i] = rq[tmp2] - rq[tmp-1];
    }

    for(long i = 0; i < q; i++){
        cout<<out[i]<<'\n';
    }

    return 0;
}