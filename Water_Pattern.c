#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row,col,n,mid,center_val,temp;
    char str[10];
    scanf("%s",str);
    n=strlen(str);
    center_val=(n/2)+1;
    for(row=1;row<=n;row++)
    {
        mid=n/2;
        temp=0;
        printf("\n");
        for(int spc=1;spc<=n-row;spc++)
            printf(" ");
        for(col=1;col<=row;col++)
        {
             if(col<=center_val)
             {
                printf("%c",str[mid++]);

               // printf("%d",col);
             }
            else
                printf("%c",str[temp++]);
        }
    }

}
