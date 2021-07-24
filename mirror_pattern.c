#include<stdio.h>
int main()
{

    int row,col,spc,n,temp1,temp2;
    n=4;
    for(row=1;row<=n;row++)
    {
        temp1=row;
        temp2=0;
        printf("\n");
        for(spc=1;spc<=n-row;spc++)
            printf(" ");
        for(col=1;col<=(2*row)-1;col++)
        {
            if(col<row)
                printf("%d",--temp1);
            else
                printf("%d",temp2++);
        }
    }
}
/*
Input:n = 4
Output:
   0
  101
 21012
3210123*/
