//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, f, p, temp, total, c;
    total = c = 0;
    cin>>n>>f>>p;

    queue<int> carros;
    for(int i = 0; i < n; i++){
        cin>>temp;
        carros.push(temp);
    }

    while(carros.size()){
        temp = carros.front();
        carros.pop();
        if(!(c%f)){
            if(temp <= p)
                total += 5;
            else{
                total += 10;
                carros.push(temp-2);
            }
        }
        else{
            total++;
        }
        c++;
    }

    cout<<total;

    return 0;
}