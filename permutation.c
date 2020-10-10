#include <stdio.h>


int main()
{
    int size, i;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);

    permutation(arr, 0, size-1);  //call permutation
    return 0;
}


void permutation(int *arr, int start, int end)
{
    if(start==end)
    {
        printarray(arr, end+1);
        return;
    }
    int i;
    for(i=start;i<=end;i++)
    {
        swap((arr+i), (arr+start));
        permutation(arr, start+1, end);
        swap((arr+i), (arr+start));
    }
}


void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void printarray(int arr[], int size)
{
    int i,j;
    for(i=0; i<size; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}






