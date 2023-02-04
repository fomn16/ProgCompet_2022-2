//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//algoritmo padrão para encontrar GCD em poucas linhas
long GCD(long a, long b){
    if(b==0){
        return a;
    }
    return GCD(b, a%b);
}


//vamos de força bruta novamente (mais ou menos, pelo menos usar LCM(a,b)=(axb)/GCD(a,b))
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long t;
    cin>>t;
    long nums[t];

    for(long i = 0; i<t; i++){
        cin>>nums[i];
    }

    for(long i = 0; i<t; i++){
        //procura-se de forma sequencial as combinações de a e b tal que a >= b
        long n = nums[i];
        bool found = false;
        for(long a = 1; a <= n && !found; a++){
            bool skipB = false;
            for(long b = 1; b <= a && !found && !skipB; b++){
                long gcd = GCD(a,b);
                long lcm = (a*b)/(gcd);
                if(n == gcd + lcm){
                    cout<<a<<' '<<b<<'\n';
                    found = true;
                }
                if(gcd + lcm > n){  //otimização??
                    skipB = true;
                }
            }
        }
    }

    return 0;
}