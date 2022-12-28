//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long mymin(long a, long b, long c){
    if(a < b){
        if(a < c)
            return a;
        return c;
    }
    if(b < c)
        return b;
    return c;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    long n, p=0, m=0, e=0, tmp, teams;
    stack<long> ps, ms, es;
    cin>>n;

    for(long i = 1; i <= n; i++){
        cin>>tmp;
        switch(tmp){
            case 1:
                p++;
                ps.push(i);
            break;
            case 2:
                m++;
                ms.push(i);
            break;
            case 3:
                e++;
                es.push(i);
            break;
        }
    }

    teams = mymin(p,m,e);
    cout<<teams<<'\n';
    for(long i = 0; i < teams; i++){
        tmp = ps.top();
        ps.pop();
        cout<<tmp<<' ';
        
        tmp = ms.top();
        ms.pop();
        cout<<tmp<<' ';
        
        tmp = es.top();
        es.pop();
        cout<<tmp<<'\n';
    }

    
    return 0;
}