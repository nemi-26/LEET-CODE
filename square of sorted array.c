#include <stdio.h>
#include <stdlib.h>
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
     *returnSize = numsSize;
    int* result = (int*)malloc(numsSize * sizeof(int));
    if (result == NULL) return NULL;
    int left = 0;
    int right = numsSize - 1;
    int p = numsSize - 1;

    while (left <= right) {
        int leftSquare = nums[left] * nums[left];
        int rightSquare = nums[right] * nums[right];

        if (leftSquare > rightSquare) {
            result[p] = leftSquare;
            left++;
        } else {
            result[p] = rightSquare;
            right--;
        }
        p--;
    }

    return result;
}
