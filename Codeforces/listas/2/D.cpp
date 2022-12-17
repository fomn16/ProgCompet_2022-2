//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int primeiroLivre(pair<int,int>*funcionarios, int n, int tempo){
    for(int i = 0; i < n; i++){
        if(funcionarios[i].second <= tempo)
            return i;
    }
    return -1;
}

int menorTempo(pair<int,int>*funcionarios, int n){
    int menor = funcionarios[0].second;
    for(int i = 1; i < n; i++){
        if(funcionarios[i].second < menor)
            menor = funcionarios[i].second;
    }
    return menor;
}

int maiorTempo(pair<int,int>*funcionarios, int n){
    int maior = funcionarios[0].second;
    for(int i = 1; i < n; i++){
        if(funcionarios[i].second > maior)
            maior = funcionarios[i].second;
    }
    return maior;
}

int desocupar(pair<int,int>*funcionarios, int n, int tempo){
    long total = 0;
    for(int i = 0; i < n; i++){
        if(funcionarios[i].second > tempo)
            total ++;
    }
    return total;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, temp, tempo, ocupados;
    tempo = ocupados = 0;
    cin>>n>>m;
    queue<int> clientes;
    pair<int,int> funcionarios[n];

    for(int i = 0; i < n; i++){
        cin>>temp;
        funcionarios[i] = {temp, 0};
    }
    for(int i = 0; i < m; i++){
        cin>>temp;
        clientes.push(temp);
    }

    while(clientes.size()){
        ocupados = desocupar(funcionarios, n, tempo);
        if(ocupados == n){
            tempo = menorTempo(funcionarios, n);
        }
        else{
            int cliente = clientes.front();
            clientes.pop();
            int i = primeiroLivre(funcionarios, n, tempo);
            auto funcionario = funcionarios[i];
            funcionarios[i] = {funcionario.first, tempo + funcionario.first*cliente};
        }
    }

    cout<<maiorTempo(funcionarios, n);

    return 0;
}