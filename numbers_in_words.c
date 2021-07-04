#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int digits(int num)
{
    int count;
    while(num)
    {
        num=num/10;
        count++;
    }
    return count;
}

int main()
{
    char* ones[]={" ","one","two","three","four","five","six","seven","eight","nine"};
    char* tens[]={" ","ten","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty"};
    int num=1258;
    int ind,value,count,div;
    count=digits(num);              //digit count
    switch(count)
    {
        case 1:ind=3;break;            //based on digit fixing ind value
        case 2:ind=2;break;
        case 3:ind=1;break;              //It is used check the number is hundreds or thousands or ones
        case 4:ind=0;break;
        default : ind=5;
    }
    int temp=num;
    while(count)
    {
       count--;
       div=pow(10,count);                   //thounsand to ones position
        value=temp/div;
        temp=temp%div;
        ind++;
        switch(ind)
        {
            case 4: printf("%s ",ones[value]); break;
            case 3: printf("%s ",tens[value]); break;
            case 2: printf("%s hundred and ",ones[value]); break;
            case 1: printf("%s thousand ",ones[value]); break;
            default:
                {
                    printf(" not supported ");
                    count=0;
                } break;
        }
    }
}
/*
Input:
1234
Output:
One thousand two hundred and thirty-four.
*/

