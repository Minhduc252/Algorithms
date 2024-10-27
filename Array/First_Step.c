/**
 * An array is a collection of similar items stored in contiguous memory location.
 * A single contiguous section/part of memory is allocated to the array
 * Static arrays - it allocates memory at compile and it size is fixed
 * Dynamic arrays - it automatically grows when we try to make insertion and there is no space left for new element
 * Accessing Element in an Array in O(1)
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5] = {1, 2, 3, 4, 5};

    int arr1[5];
    for (int i = 0; i < 5; i++)
        arr1[i] = i;

    return 0;
}
