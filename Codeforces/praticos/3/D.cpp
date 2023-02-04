//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>
#include <limits>


//peço muitas desculpas por esse codigo feio
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long t;

    cin>>t;

    string tmp, out[t];

    for(int i = 0; i < t; i ++){
        
        map<char,char> corr;
        cin>>tmp;
        char primeiro = tmp[0], ultimo = tmp[tmp.size()-1];
        corr[primeiro] = '(';
        corr[ultimo] = ')';
        if(primeiro == ultimo)
            out[i] = "NO";
        else{
            char outro;
            if(!corr.count('A'))
                outro = 'A';
            else if(!corr.count('B'))
                outro = 'B';
            else
                outro = 'C';

            corr[outro] = ')';

            stack<char> tst;
            for (char c : tmp){
                if(tst.empty() || tst.top() == corr[c])
                    tst.emplace(corr[c]);
                else
                    tst.pop();
            }

            if(tst.empty())
                out[i] = "YES";

            else{
                corr[outro] = '(';
                stack<char> tst2;
                for (char c : tmp){
                    if(tst2.empty() || tst2.top() == corr[c])
                        tst2.emplace(corr[c]);
                    else
                        tst2.pop();
                }

                if(tst2.empty())
                    out[i] = "YES";
                else
                    out[i] = "NO";
            }
        }
    }

    for(int i = 0; i < t; i ++)
        cout<<out[i]<<'\n';

    return 0;
}