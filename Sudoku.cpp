#include "Sudoku.h"
void Sudoku::GiveQuestion()
{
    printf("1 2 0 8 7 3 9 5 4 -1 -1 -1 \n8 7 3 9 5 4 6 2 1 -1 -1 -1 \n9 5 4 6 2 1 8 7 3 -1 -1 -1 \n-1 -1 -1 4 3 2 1 8 7 9 5 6 \n-1 -1 -1 7 8 5 4 9 6 1 2 3 \n-1 -1 -1 1 9 6 2 3 5 8 7 4 \n4 3 7 2 1 8 -1 -1 -1 6 9 5 \n2 8 1 5 6 9 -1 -1 -1 4 3 7 \n6 9 5 3 4 7 -1 -1 -1 2 8 1 \n3 4 2 -1 -1 -1 7 1 8 5 6 9 \n7 1 8 -1 -1 -1 5 6 0 3 4 2 \n5 6 9 -1 -1 -1 3 4 2 7 1 8\n");
}
void Sudoku::ReadIn()
{
    ans=0;
    int i,j;
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%d", &read[i][j]);
        }
    }
    printf("\n");
}

void Sudoku::Solve()
    {
        int i,j;
        ans=0;

        re_find();

        if(ans==1)
        {
            printf("1\n");

            for(i=0;i<12;i++)
            {
                for(j=0;j<12;j++)
                {
                    printf("%d ",temp[i][j]);
                }

                printf("\n");
            }
        }
        else if(ans==0)
        {
            printf("0\n");
        }
        else if(ans>1)
        {
            printf("2\n");
        }
    }

    void Sudoku::re_find()
    {
        int i,j,r,c,d,k,p,q,x,y;
        int col,row,square;
        int zero=0;

        for(i=0;i<12;i++) //count zero
        {
            for(j=0;j<12;j++)
            {
                if(read[i][j]==0)
                {
                    zero++;
                }
            }
        }

        if(zero==0)  //find a solution
        {
            for(i=0;i<12;i++)
            {
                for(j=0;j<12;j++)
                {
                    temp[i][j]=read[i][j];
                }
            }

            ans++;
            return;
        }

        for(i=0;i<12;i++)
        {
            for(j=0;j<12;j++)
            {
                if(read[i][j]==0)
                {
                    for(r=1;r<10;r++)
                    {
                        row=0,col=0,square=0;

                        for(c=0;c<12;c++)        //check col
                        {
                            if(r==read[c][j])
                            {
                                col=1;
                                break;
                            }
                        }

                        for(c=0;c<12;c++)      //check row
                        {
                            if(r==read[i][c])
                            {
                                row=1;
                                break;
                            }
                        }

                        x=i%3;                //check square
                        y=j%3;
                        p=i-x;
                        q=j-y;
                        for (c=0;c<3;c++)
                        {
                            for (d=0;d<3;d++)
                            {
                                if(r==read[p+c][q+d])
                                {
                                    square=1;
                                    break;
                                }
                            }

                            if(square==1)
                                break;
                        }

                        if(row==0 && col==0 && square==0) //fill number in the zero and run recursive
                        {
                            read[i][j]=r;
                            re_find();

                        }

                        read[i][j]=0;

                        if(ans>1)   //exceed 1 answer
                        {
                            return;
                        }

                    }
                    return;
                }
            }
        }
    }

