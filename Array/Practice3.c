// Given an array arr[] of size N and an integer K, the task is to find all the array elements that appear more than (N / K) times.
#include <stdio.h>

void NDivKWithFreq(int arr[], int N, int K)
{
    // find the max element of the array, init an array  with size of max element + 1. Traverse the arr  and count the frequency of each element and do count[arr[i]]++. Finally , print the elements with frequency more than N/K in count table

    // Find the maximum element in the array
    int max = arr[0];
    for (int i = 1; i < N; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Initialize the count array with zeros
    int count[max + 1];
    for (int i = 0; i <= max; i++) {
        count[i] = 0;
    }

    // Count the frequency of each element
    for (int i = 0; i < N; i++) {
        count[arr[i]]++;
    }

    // Print elements that appear more than N / K times
    for (int i = 0; i <= max; i++) {
        if (count[i] > N / K) {
            printf("%d ", i);
        }
    }
}

int main()
{
    int arr[] = {1, 2, 2, 6, 6, 6, 6, 7, 10};
    int N = sizeof(arr) / sizeof(arr[0]);
    int K = 4;

    NDivKWithFreq(arr, N, K);
    return 0;
}