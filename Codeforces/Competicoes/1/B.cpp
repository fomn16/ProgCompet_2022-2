//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isBeautiful(int* a){
    return a[0] < a[1] && a[2] < a[3] && a[0] < a[2] && a[1] < a[3];
}

void rotate(int* a){
    int tmp = a[0];
    a[0] = a[2];
    a[2] = a[3];
    a[3] = a[1];
    a[1] = tmp;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, a[4];
    cin>>t;
    bool out[t] = {false};

    for (int i = 0; i < t; i++)
    {
        for(int j = 0; j < 4; j++)
            cin>>a[j];

        for(int j = 0; j < 4; j++){
            if(isBeautiful(a)){
                out[i] = true;
            }
            rotate(a);
        }
    }

    for (int i = 0; i < t; i++)
    {
        if(out[i])
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}