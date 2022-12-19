//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, k, n, extraSums, currentSum, lastInt;
    cin>>t;
    list<int> out[t] = {list<int>()};

    for (int i = 0; i < t; i++){
        cin>>k>>n;
        extraSums = n-k;
        currentSum = 0;
        lastInt = 1;
        out[i].emplace_back(1);
        for(int j = 0; j < k-1; j++){
            //cout<<extraSums<<' '<<currentSum<<'\n';
            if(extraSums >= currentSum){
                lastInt += currentSum + 1;
                extraSums -= currentSum;
                currentSum++;
            }
            else{
                lastInt++;
            }
            out[i].emplace_back(lastInt);
        }
    }

    for (int i = 0; i < t; i++){
        for(int tmp : out[i]){
            cout<<tmp<<' ';
        }
        cout<<'\n';
    }

    return 0;
}