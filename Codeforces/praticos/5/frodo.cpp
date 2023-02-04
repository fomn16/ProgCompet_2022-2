//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long n,m,k;

long long mais_camas(long long x, long long k){
    return x*(x+1)/2 + k - x;
}

long long mais_travesseiros(long long x, long long k){
    return k*(2*x-k+1)/2;
}

bool check(long long x){
    long long count = 0;

    if(x<=k){
        count += mais_camas(x,k);
    }
    else{
        count += mais_travesseiros(x, k);
    }

    if(x-1 <= n-k){
        count += mais_camas(x-1,n-k);
    }
    else{
        count += mais_travesseiros(x-1, n-k);
    }

    return (count <= m);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m>>k;

    long long l, r, mid, ans;
    l = 1;
    r = m;
    ans = -1;

    while(l <= r){
        mid = (l+r)/2;
        if(check(mid)){
            ans = mid;
            l = mid+1;
        }
        else
            r = mid-1;
    }

    cout<<ans;
    return 0;
}