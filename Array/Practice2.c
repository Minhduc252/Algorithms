// Given an array arr[] consisting of only 0s, 1s, and 2s. The task is to sort the array, i.e., put all 0s first, then all 1s and all 2s in last.
#include <stdio.h>

void sort012(int arr[], int n)
{
    // the idea 1: Traverse the array and count the number of 0s, 1s and 2s. Then, put the 0s first, then 1s and then 2s. -> O(n)
    int n0, n1, n2;
    n0 = n1 = n2 = 0;
    for (int i = 0; i < n; i++)
        switch (arr[i])
        {
        case 0:
            n0++;
            break;
        case 1:
            n1++;
            break;
        case 2:
            n2++;
            break;
        default:
            printf("Invalid\n");
        }
    int i = 0;
    while (n0 != 0)
        arr[i++] = 0, n0--;
    while (n1 != 0)
        arr[i++] = 1, n1--;
    while (n2 != 0)
        arr[i++] = 2, n2--;

    // The idea 2: create 2 pointer , one at the beginning and one at the end of the array. Traverse the array from left to  right. If the current element is 0, swap it with the element at the left pointer and  increment the left pointer. If the current element is 2, swap it with the element at the  right pointer and decrement the right pointer. -> O(n)
    int head = 0, tail = n - 1;
    while (arr[head] != 0)
        head++;
    while (arr[tail] != 2)
        tail--;
    int i = head + 1, tmp;
    while (i <= tail)
    {
        switch (arr[i])
        {
        case 0:
            tmp = arr[i];
            arr[i] = arr[head];
            arr[head] = tmp;
            head++;
            break;
        case 1:
            i++;
            break;
        case 2:
            tmp = arr[i];
            arr[i] = arr[tail];
            arr[tail] = tmp;
            tail--;
            break;
        }
    }
}

int main()
{
    int arr[] = {0, 1, 2, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort012(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}