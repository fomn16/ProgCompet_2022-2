//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int vec[2][100001] = {0}, tmp, t, invers = 0;

void ms (int i, int j){
    //1
    if(i == j)
        return;

    //2
    if(j - i == 1)
    {
        if( vec[0][i] > vec[0][j]){
            tmp = vec[0][i];
            vec[0][i] = vec[0][j];
            vec[0][j] = tmp;
            invers++;
        }
        return;
    }

    //n
    int s = (j - i)/2;

    int a = i;
    int _b = i+s+1;
    int b = _b;
    int k = a;

    ms(i, b-1);
    ms(b, j);

    while(k != j+1){
        if(a == _b){
            vec[1][k] = vec[0][b];
            b++;
        }
        else if(b == j+1){
            vec[1][k] = vec[0][a];
            a++;
        }
        else{
            if(vec[0][b] < vec[0][a]){
                vec[1][k] = vec[0][b];
                b++;
                if(vec[0][k] > vec[0][b])
                    invers++;
            }
            else{
                vec[1][k] = vec[0][a];
                a++;
                if(vec[0][k] > vec[0][a])
                    invers++;
            }
        }
        k++;
    }

    for(int a = i; a <= j ; a++){
        vec[0][a] = vec[1][a];
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>t;
    for(int i = 0; i < t; i++){
        cin>>vec[0][i];
    }

    ms(0, t-1);

    for(int i = 0; i < t; i++){
        cout<<vec[0][i]<<' ';
    }
    cout<<'\n'<<invers;

    return 0;
}