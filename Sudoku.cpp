#include <iostream>
#include "Sudoku.h"
using namespace std;

void Sudoku::GiveQuestion(){
    int mapG[12][12]={
4,2,6,8,7,3,0,5,1,-1,-1,-1
,8,7,3,9,5,1,6,2,4,-1,-1,-1
,9,5,1,0,2,4,8,7,3,-1,-1,-1
,-1,-1,-1,1,3,2,4,8,7,9,5,6
,-1,-1,-1,7,8,5,1,9,6,4,2,3
,-1,-1,-1,4,9,6,2,3,5,8,7,1
,1,3,7,2,4,8,-1,-1,-1,6,9,5
,2,8,4,0,6,9,-1,-1,-1,1,3,7
,6,9,5,3,1,7,-1,-1,-1,2,8,4
,3,1,2,-1,-1,-1,0,0,0,0,0,9
,7,4,8,-1,-1,-1,5,6,9,3,1,2
,5,6,9,-1,-1,-1,3,1,2,7,4,8
    };
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cout<<mapG[i][j]<<" ";
        }cout<<endl;
    }
}
void Sudoku::ReadIn()
{
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>read[i][j];
        }
    }
}

void Sudoku::Solve(){}


