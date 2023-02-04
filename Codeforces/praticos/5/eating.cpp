//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long t, n, q, x, tmp;

list<long long> out;

bool check(long long mid, long long * sums){
    return sums[mid] >= x;
}

void binarySearch(long long * sums){
    long long l, r, mid, ans;
    l = 0;
    r = n;
    ans = -1;

    while(l <= r){
        mid = (l+r)/2;
        if(check(mid, sums)){
            ans = mid;
            r = mid-1;
        }
        else
            l = mid+1;
    }
    out.emplace_back(ans);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>t;

    for(long long i = 0; i < t; i++){
        cin>>n>>q;
        vector<long long> candies;
        for(long long j = 0; j < n; j++){
            cin>>tmp;
            candies.emplace_back(tmp);
        }
        sort(candies.begin(), candies.end(), greater <>());

        long long sums[n + 1] = {0};
        for(long long j = 1; j <= n; j++){
            sums[j] = sums[j-1]+candies[j-1];
        }

        for(long long j = 0; j < q; j++){
            cin>>x;
            binarySearch(sums);
        }
    }

    for(long long ans : out)
        cout<<ans<<'\n';

    return 0;
}