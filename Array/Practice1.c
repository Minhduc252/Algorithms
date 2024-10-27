// Given an array arr[] of size n, the task is to print all the Leaders in the array. An element is a Leader if it is greater than all the elements to its right side.
// Note: The rightmost element is always a leader.
#include <stdio.h>
#include <stdlib.h>

int *leaders(int arr[], int n, int *resSize)
{
    // Create a leader variable to store the leader value. Traverse the array from right to left, if it is greater than the leader, update the leader and add it to the result array.

    if (n == 1)
        return arr;
    int *result = (int *)malloc(n * sizeof(int));
    int leader = arr[n - 1];
    int count = 0;
    result[count++] = leader;
    for (int i = n - 2; i >= 0; i--)
        if (arr[i] > leader)
        {
            leader = arr[i];
            result[count++] = arr[i];
        }
    *resSize = count;
    return result;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int resSize;

    int *result = leaders(arr, n, &resSize);
    for (int i = 0; i < resSize; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result);
    return 0;
}