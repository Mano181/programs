#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6};
    int b[20],n,ind,itr,l,f;
    f=0;
   // scanf("%d",&n);
    l=6;
    n=sizeof(a) / sizeof(a[0]);
  //  for(ind=0;ind<n;ind++)
  //      scanf("%d",&a[ind]);
    for(itr=0;itr<n;itr++)
    {
        if(itr%2==0)
            b[itr]=a[--l];
        else
            b[itr]=a[f++];
    }
    for(ind=0;ind<n;ind++)
        printf("%d",b[ind]);

}
/*
INPUT :
1,2,3,4,5,6,7 (will be in any order)

OUTPUT:
7,1,6,2,5,3,4
*/
