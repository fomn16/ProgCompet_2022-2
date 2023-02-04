//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

list<string> generateSubstrings(string in, long n){
    list<string> out;
    for (long i = 0; i < n; i++){
        out.emplace_back(in.substr(i,n));
    }
    return out;
}

string genOutput(list<string>in){
    if(in.size() == 0)
        return "";

    int ones = 0;
    int zeros = 0;
    string out;
    string res;
    list<string> nextStep;

    for(auto i : in){
        if(i[0]=='1')
            ones++;
        else
            zeros++;
    }

    if(zeros > ones){
        out = "0";
        for(auto i : in){
            if(i[0]=='1')
                nextStep.emplace_back(i.erase(0,1));
        }
        res = genOutput(nextStep);
        if(res == ""){
            while(out.length() != in.front().length())
                out += '0';
        }
        else{
            out += res;
        }
    }
    else{
        out = "1";
        for(auto i : in){
            if(i[0]=='0')
                nextStep.emplace_back(i.erase(0,1));
        }
        res = genOutput(nextStep);
        if(res == ""){
            while(out.length() != in.front().length())
                out += '1';
        }
        else{
            out += res;
        }
    }

    return out;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long t, n;
    char c;
    cin>>t;
    string out[t];
    string in, sub;
    
    for (long i = 0; i < t; i++){
        cin>>n;
        in = "";
        for(long j = 0; j < 2*n-1; j++){
            cin>>c;
            in += c;
        }
        
        out[i] = genOutput(generateSubstrings(in, n));
    }

    for (string i :out){
        cout<<i<<'\n';
    }

    return 0;
}