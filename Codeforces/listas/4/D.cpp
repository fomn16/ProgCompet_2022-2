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
    long long vacinados[n+2] = {0}, campanhas[n+2] = {0};

    for(long long i = 1; i <= n; i++){
        cin>>tmp;
        vacinados[i] += tmp;
        vacinados[i+1] -= tmp;
    }

    for(long long i = 1; i <= m; i++){
        cin>>tmp>>tmp2>>tmp3;

        vacinados[tmp] -= tmp3;
        vacinados[tmp2 + 1] += tmp3;

        campanhas[tmp]++;
        campanhas[tmp2+1]--;
    }

    tmp = 0;
    for(long long j = 1; j <= n; j++){
        tmp += vacinados[j];
        cout<<tmp<<' ';
    }
    cout<<'\n';

    tmp = 0;
    for(long long j = 1; j <= n; j++){
        tmp += campanhas[j];
        cout<<tmp<<' ';
    }
    cout<<'\n';

    /*
    tmp = tmp2 = tmp3 = 0;
    for(long long j = 1; j <= n; j++){
        tmp += vacinados[j];
        tmp2 += campanhas[j];
        if(tmp > 0){
            tmp3+=tmp2;
        }
    }

    cout<<tmp;*/

    return 0;
}