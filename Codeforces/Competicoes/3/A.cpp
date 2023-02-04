//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int t, n, out[3], in[300], sum;

bool dfs(int outId = 0, int inId = 0){
    //cout<<outId<<' '<<inId<<'\n';
    if(outId > 2)
        return sum%2;

    if(inId >= n)
        return false;

    out[outId] = inId;
    sum += in[inId];
    if(dfs(outId+1, inId+1))
        return true;
    sum -= in[inId];
    return dfs(outId, inId+1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);   

    cin>>t;

    for(int i = 0; i < t; i++){
        cin>>n;
        for(int j = 0; j < n; j++){
            cin>>in[j];
        }
        sum = 0;
        if(dfs())
            cout<<"YES\n"<<out[0]+1<<' '<<out[1]+1<<' '<<out[2]+1<<'\n';
        else
            cout<<"NO\n";
    }

    return 0;
}