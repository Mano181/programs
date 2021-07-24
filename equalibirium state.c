#include<stdio.h>
int main()
{
    int Arr[100],inc,ind,itr,NoofElements;
    int forwardSum=0,backwardSum=0;
    scanf("%d",&NoofElements);
    for(ind=0;ind<NoofElements;ind++)
        scanf("%d",&Arr[ind]);
    for(itr=0;itr<NoofElements;itr++)
        forwardSum=forwardSum+Arr[itr];
    for(inc=0;inc<NoofElements;inc++)
    {
        backwardSum=backwardSum+Arr[inc];
        if(backwardSum==forwardSum)
            return printf("Equalibirum State:%d",inc);
        forwardSum=forwardSum-Arr[inc];
    }
    printf("There is no equalibirum state")




}
