#include<stdio.h>
int main()
{
   int row,col,spc,n,val;
    n=4;
    val=1;
    int temp;
    for(row=1;row<=n;row++)
    {
        printf("\n");
        for(spc=1;spc<=n-row;spc++)
            printf(" ");
        if(row%2!=0)
            for(col=1;col<=n;col++)
                printf("%02d ",val++);      //for odd row increment
        else
        {
            temp=val+4;                     //for even add 4 to the last value and decrement also increment val for next row
            for(col=n;col>0;col--)
            {
                printf("%02d ",--temp);
                val++;
            }
        }
    }
}
/*
Input: 4

Output:

 	 	 	1	2	3	4
 	 	8	7	6	5
 	9	10	11	12
16	15	14	13	 	 	 */
