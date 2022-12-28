//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long x, y, z, m, n, tmp2;

    cin>>x>>y>>z>>m>>n;

    vector<long> tamanduas;
    tamanduas.emplace_back(m);
    char tmp;

    for(long i =0; i < n; i++){
        cin>>tmp;
        switch (tmp)
        {
            case 'F':
                    tmp2 = x;
                break;
            case 'A':
                    tmp2 = y;
                break;
            case 'R':
                    tmp2 = z;
                break;
        }

        bool comeu = false;

        for(long i = 0; i < tamanduas.size(); i++){
            if(tmp2 <= tamanduas[i]){
                tamanduas[i] -= tmp2;
                comeu = true;
                break;
            }
        }

        if(!comeu)
            tamanduas.emplace_back(m-tmp2);
    }

    cout<<tamanduas.size();
    return 0;
}