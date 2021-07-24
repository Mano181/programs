#include<stdio.h>
int main()
{
    char str[30]="12345 * + - +";
    int stack[20],ind,temp,itr,inc;
    temp=str[0]-48;
    inc=1;
    for(ind=0;str[ind]!='\0';ind++)
    if(str[ind]>=48&&str[ind]<=57)
        stack[ind]=str[ind]-48;
    for(itr=0;str[itr]!='\0';itr++)
    if(str[itr]=='*'||str[itr]=='+'||str[itr]=='-'||str[itr]=='/')
    {

        switch(str[itr])
        {
        case '*':
            temp=temp*stack[inc++];
             break;
        case '+':
            temp=temp+stack[inc++];
            break;
        case '-':
            temp=temp-stack[inc++];
            break;
        case '/':
            temp=temp/stack[inc++];
            break;
        default:
            printf("Invalid expression");

        }
    }
    printf("%d",temp);
}
/*
Input: "12345 * + - + "
Result: 6 [Explanation: 1 * 2 + 3 - 4 + 5 = 6]*/
