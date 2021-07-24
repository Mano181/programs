/*
Given an array of integers, replace every element with the next greatest element (greatest
element on the right side) in the array. Since there is no element next to the last element,
replace it with -1.
For example, if the array is input:{16, 17, 4, 3, 5, 2} then it should be modified to
                             output:{17, 5, 5, 5, 2, -1}


temp=last-2                                temp=4
max_value2=arr[last-1]                     max_value2=5
max_value1=max_value2                      max_value1=5
arr[last-1]=arr[last]                      arr[5]=2
arr[last] = -1;                            arr[6]=-1

while(--temp)                  4             3         2             1
{
    max_value2=max_value1;     5             5         5             17
    if(arr[temp]>max_value)    3>5           4>5       17>5          16>17
        max_value=arr[temp]                            max_value=17
    arr[temp]=max_value2       arr[4]=5      arr[3]=5  arr[2]=5      arr[1]=17
}*/


#include<stdio.h>
int main()
{
    int n,last,arr[20];
    int ind,itr,temp;
    int max_value1,max_value2;
    scanf("%d",&n);
    last=n;
    for(ind=1;ind<=n;scanf("%d",&arr[ind++]));
    temp=n-2;
    max_value2=arr[n-1];
    max_value1=max_value2;
    arr[last-1]=arr[last];
    arr[last]=-1;
    while(temp--)
    {

        max_value2=max_value1;
        if(arr[temp]>max_value1)
            max_value1=arr[temp];
         arr[temp]=max_value2;
    }
   for(ind=1;ind<=n;ind++)
    printf("%d ",arr[ind]);
}//6 16 17 3 4 5 2
