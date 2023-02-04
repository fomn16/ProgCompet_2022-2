//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    long long n, q, tmp1, tmp2, out = 0;

    cin>>n>>q;
    
    long long queries[n+2] = {0};
    vector<long long> a;
    vector<long long> sum;

    a.emplace_back(0);
    for(long i = 1; i <= n; i++){
        cin>>tmp1;
        a.emplace_back(tmp1);
    }

    for(long i = 1; i <= q; i++){
        cin>>tmp1>>tmp2;
        queries[tmp1]++;
        queries[tmp2+1]--;
    }

    sum.emplace_back(0);
    for(long i = 1; i <= n; i++)
        sum.emplace_back(sum[i-1] + queries[i]);

    sort(sum.begin(), sum.end(), greater <>());
    sort(a.begin(), a.end(), greater <>());

    for(long i = 0; i <= n; i++)
        out += sum[i] * a[i];

    cout<<out;

    return 0;
}