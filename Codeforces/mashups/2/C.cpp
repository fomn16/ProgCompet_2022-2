//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long n, m, d, tmp, jornadas = 0, j;
    cin>>n>>m>>d;
    stack<long>carretinha, tmp2;
    long trajeto[n];

    for(long i = 0; i < n; i++){
        cin>>trajeto[i];
    }

    for(long i = 0; i < m; i++){
        cin>>tmp;
        carretinha.push(tmp);
    }

    while(carretinha.size()){
        for(long i = 0; i < n; i++){
            j = 0;
            while(carretinha.size() && j < d){
                tmp = carretinha.top();
                carretinha.pop();
                if(tmp != trajeto[i])
                    tmp2.push(tmp);
                j++;
            }

            while(tmp2.size()){
                tmp = tmp2.top();
                tmp2.pop();
                carretinha.push(tmp);
            }
        }

        jornadas++;
    }

    cout<<jornadas;
    return 0;
}