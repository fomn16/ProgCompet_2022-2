//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int myAbs(int a){
    if(a>=0)
        return a;
    return -a;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long n;
    cin>>n;
    double notaQuestao = 10.0/n;
    double notaTotal = 0;
    char a, b;
    for (long i = 0; i < n; i++){
        cin>>a>>b;
        if(a==b)
            notaTotal+=notaQuestao;
    }
    cout<<"Nota: " << fixed << setprecision(2) << notaTotal;

    return 0;
}