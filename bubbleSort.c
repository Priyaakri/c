#include<stdio.h>
void BubbleSort(int A[], int n)
{
    int t, i,j;
    for(i = 0;i<n;i++)
    {
        for(j=n-1;j>i;j--)
        {
            if(A[j]<A[j-1])
            {
                t=A[j];
                A[j]=A[j-1];
                A[j-1] = t;
            }
        }
    }
}

void main()
{
    int A[100], i,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Unsorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d, ", A[i]);
    }

    BubbleSort(A,n);
    printf("Sorted array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d, ",A[i]);
    }
}