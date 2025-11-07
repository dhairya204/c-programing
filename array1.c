#include<stdio.h>
int main()
{
    int size;
    printf("Enter the array size :- ");
    scanf("%d",&size);
    int arr[size];

    for(int x = 0; x < size; x++)
        scanf("%d",&arr[x]);

    printf("Sum of Array :- %d",sumArray(arr, size));
       
    printf("\n");
return 0;
}