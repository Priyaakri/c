#include<stdio.h>

int binarySearch(int A[],int key,int f,int l)
{
    int mid;
    if(f>l){
        return -1;
    }
    mid= (f+l)/2;
    if(A[mid]==key)
    {
        return mid;
    } else if(A[mid]>key){
        binarySearch(A,key,f,mid-1);
    } else{
        binarySearch(A,key,mid+1,l);
    }

}

void main()
{
    int A[100],n,i,key,f, l,p;
    printf("Enter the size of array:");
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
    else{
        printf("Element %d found at index %d",key,p);
    }
}