//g++ main.cpp -o main.exe  -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<long> nums;
long maxId;
long target;
long nSequences = 0;

short hasSum(long prevSum = 0, long newId = 0){
    //cout << prevSum << ' ' << newId << '\n';
    short currSum = prevSum + nums[newId];
    if(currSum > target)
        return 1;
    if(currSum == target){
        nSequences++;
        return -1;
    }
    newId++;
    while(newId <= maxId){
        short result = hasSum(currSum, newId);
        if(result == 1)
            break;
        newId++;
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long n;
    cin>>n;
    cin>>target;
    long temp;
    for (long i = 0; i < n; i++){
        cin>>temp;
        nums.emplace_back(temp);
    }

    sort(nums.begin(), nums.end());

    maxId = nums.size();

    for (long i = 0; i < maxId; i++){
        hasSum(0, i);
    }
    cout<<nSequences;

    return 0;
}