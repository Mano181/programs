#include<stdio.h>
#include<stdlib.h>
int stack[20];
int top=0;
void push(char val)
{
    ++top;
    stack[top]=val;
}
void pop()
{
    printf("%c",stack[top]);
    --top;
}
int main()
{
    char str[50];
    gets(str);                              //Get the string
    for(int ind=0;str[ind]!='\0';ind++)
        if(str[ind]==' ')                   //if there occours space
        {                                       //pop(print) full stack
            while(top)
                pop();
            printf(" ");
        }
        else                                //push character to the stack
           push(str[ind]);

    while(top>0)
        pop();

}
// Dog barks output: god skrab.
