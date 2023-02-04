//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//u = guarda caixas
//v = garragas avulsas
//1 caixa = B garrafas (cheia para ser guardada)


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, b, temp, temp2;
    long garrafas = 0, caixas = 0;
    cin>>n>>caixas>>b;
    queue<pair<int, int>> caminhoes;

    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        caminhoes.push({temp, 0});
    }

    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        temp2 = caminhoes.front().first;
        caminhoes.pop();
        caminhoes.push({temp2, temp});
    }

    while(caminhoes.size()){
        pair<int, int> caminhao = caminhoes.front();
        caminhoes.pop();
        //carregar
        if(caminhao.second == 0){
            garrafas += caminhao.first;
            caixas += garrafas/b;
            garrafas = garrafas%b;
        }
        //descarregar
        else if(caminhao.second == 1){
            if(caixas == 0){
                caminhoes.push({caminhao.first, -1});
            }
            else{
                caixas -= caminhao.first/b;
                if(caixas < 0)
                    caixas = 0;
            }
        }
        //ultima tentativa de descarregar
        else{
            caixas -= caminhao.first/b;
            if(caixas < 0)
                caixas = 0;
        }
    }

    cout<<garrafas + b*caixas;

    return 0;
}