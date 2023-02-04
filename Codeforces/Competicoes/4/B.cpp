//g++ -o main.exe -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self nome.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int x, y, t, n;
bool found;
char c;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>t;

    for(int i = 0; i < t; i++){
        cin>>n;
        found = false;
        x = 0;
        y = 0;

        for(int j = 0; j < n; j++){
            cin>>c;
            switch (c)
            {
                case 'U':
                        y++;
                    break;
                case 'D':
                        y--;
                    break;
                case 'L':
                        x--;
                    break;
                case 'R':
                        x++;
                    break;
            }
            if(x == 1 && y == 1)
                found = true;
        }
        if(found)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}