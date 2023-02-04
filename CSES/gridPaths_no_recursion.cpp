//g++ main.cpp -o main.exe  -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter -Werror=init-self
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//side = 7, steps = 7*7-1 = 48

#define GRID_SIDE 7
#define N_STEPS 48

bool visited[N_STEPS + 1];
int xs[N_STEPS + 1];
int ys[N_STEPS + 1];
int thisStep[N_STEPS + 1];
int constraints[N_STEPS + 1];
int adjency[N_STEPS + 1];
int adjencyId;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char c;
    for (int i = 0; i < N_STEPS; i++){
        cin>>c;
        if(c == 'U')
            constraints[i] = 0;
        else if(c == 'D')
            constraints[i] = 1;
        else if(c == 'L')
            constraints[i] = 2;
        else if(c == 'R')
            constraints[i] = 3;
        else
            constraints[i] = -1;
    }

    int step = 0;
    long pathCount = 0;

    bool back, doubleBack = false;
    int currX, currY, pos, cs, ts, lastX, lastY;

    //O = current:
    //AXB
    //XOX
    //CXD
    bool A,B,C,D;
    bool boundedX, boundedY;

    while(true){
        ts = thisStep[step];
        
        //cout<<"\n"<<step<<' '<<visited[pos]<<' '<<xs[step]<<' '<<ys[step]<<' '<<thisStep[step]<< ' ' << cs << ' ' << doubleBack <<"\n";
        //printVisited();
        //condição de parada
        if(step==0 && ts==4)
            break;
            
        if(doubleBack){
            back = true;
            doubleBack = false;
        }
        else{
            back = false;
            currX = xs[step];
            currY = ys[step];
            doubleBack = false;
            pos =  currX*GRID_SIDE + currY;
            //condições para voltar ao passo anterior
            //posição fora da grid
            if(currX < 0 || currX >= GRID_SIDE || currY < 0 || currY >= GRID_SIDE){
                back = true;
            }
            //posição visitada previamente
            else if(visited[pos]){
                back = true;
            }
            else if(back && step>0){
                lastX = xs[step-1];
                lastY = ys[step-1];
                A = !visited[pos+GRID_SIDE-1];
                B = !visited[pos+GRID_SIDE+1];
                C = !visited[pos-GRID_SIDE-1];
                D = !visited[pos-GRID_SIDE+1];
                boundedX = currX != 0 && currX != GRID_SIDE-1;
                boundedY = currY != 0 && currY != GRID_SIDE-1;

                if(currX < lastX && boundedY && A && B){
                    doubleBack = true;
                }
                else if(currX > lastX && boundedY && C && D){
                    doubleBack = true;
                }
                else if(currY<lastY && boundedX && D && B){
                    doubleBack = true;
                }
                else if(currY>lastY && boundedX && C && A){
                    doubleBack = true;
                }
            }
            //chegou ao destino
            else if(currX==0 && currY == GRID_SIDE-1){
                //cout<<"reached last position on step " << step << '\n';
                if(step == N_STEPS)
                    pathCount++;
                back = true;
            }

            //vai ao próximo passo se não precisa voltar
            if(!back){
                cs = constraints[step];
                //up
                if(ts==0){
                    if((cs == -1 || cs == 0)){                        
                        visited[pos] = true;
                        currY--;
                        step++;
                        xs[step] = currX;
                        ys[step] = currY;
                    }
                    else{
                        thisStep[step]++;
                    }
                }
                
                //down
                else if(ts==1){
                    if((cs == -1 || cs == 1)){
                        visited[pos] = true;
                        currY++;
                        step++;
                        xs[step] = currX;
                        ys[step] = currY;
                    }
                    else{
                        thisStep[step]++;
                    }
                }

                //left
                else if(ts==2){
                    if((cs == -1 || cs == 2)){
                        visited[pos] = true;
                        currX--;
                        step++;
                        xs[step] = currX;
                        ys[step] = currY;
                    }
                    else{
                        thisStep[step]++;
                    }
                }
                
                //right
                else if(ts == 3){
                    if((cs == -1 || cs == 3)){
                        visited[pos] = true;
                        currX++;
                        step++;
                        xs[step] = currX;
                        ys[step] = currY;
                    }
                    else{
                        thisStep[step]++;
                    }
                }
                else{
                    back = true;
                }
            }
        
        }

        //volta ao passo anterior
        if(back){
            thisStep[step] = 0;
            step--;
            thisStep[step]++;
            visited[xs[step]*GRID_SIDE + ys[step]] = false;
        }
    }

    cout<<pathCount;
    return 0;
}