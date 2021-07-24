#include<stdio.h>
int main()
{
    int arr[]={1, 2, 4, 5, 1, 5, 5, 2, 10, 22, 5};
    int arr_size,count;
    int ind, itr;
 //Get the size of array
    arr_size=sizeof(arr)/sizeof(arr[0]);

    for(ind=0;ind<arr_size;ind++)
    {
        count=1;
        for(itr=ind+1;itr<=arr_size;itr++)
    //comparing the vlaue if it is not null
            if(arr[ind]==arr[itr] && arr[ind]!=NULL)
                {
                    arr[itr]=NULL;  //setting null to dublicate value
                    ++count; //counting the number of time element occurs
                }
        if(count>1) //print if the element occur more than one time                }
            printf("%d -> %d \n",arr[ind],count);

    }
}

/*Input : [ 1, 2, 4, 5, 2, 1, 5, 2, 10, 22, 5 ]
Output:
1 -> 2
2 -> 3
5 -> 3 */
