//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//não consegui pensar em outro jeito de fazer, então vou de força bruta e é isso aí
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long n;
    cin>>n;
    set<long> triangulars;  //pelo menos usando um set para a busca ser menos pior (mas acho que depende do compilador)
    long i = 1;

    //calculando todos os triangulares até n
    while(1){
        long t = i*(i+1)/2;
        if(t > n)
            break;
        triangulars.insert(t);
        i++;
    }

    //para cada um, vendo se o respectivo está no set
    for (long i : triangulars){
       if(triangulars.find(n-i) != triangulars.end()){
        cout << "YES";
        return 0;   //early return
       }
    }

    cout<<"NO";
    return 0;
}