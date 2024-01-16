#include<stdio.h>

int binarySearch(int A[], int key, int f, int l)
{
    int mid;
    while (f<=l)
    {
        mid = (f+l)/2;
        if(A[mid]==key){
            return mid;
        }
        if(A[mid]>key)
        {   
            l = mid-1;

        } else {
            f = mid+1;
        }
    }

    return -1;
    
}


void main()
{
    int A[100],i,p,n,key,f,l;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    f=0;
    l=n;

    printf("Enter the key to be search: ");
    scanf("%d",&key);

    p = binarySearch(A,key,f,l);
    if(p==-1)
    {
        printf("Element not found");

    }
    else {
        printf("Element %d found at index %d",key,p);
    }


}