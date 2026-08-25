#include <stdio.h>
#include <stdlib.h>
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int hash[1001] = {0}; 
    for (int i = 0; i < nums1Size; i++) {
        hash[nums1[i]] = 1;
    }
    int maxResultSize = nums1Size < nums2Size ? nums1Size : nums2Size;
    int* result = (int*)malloc(maxResultSize * sizeof(int));
    int count = 0;
    for (int i = 0; i < nums2Size; i++) {
        if (hash[nums2[i]] == 1) {
            result[count++] = nums2[i];
            hash[nums2[i]] = 0;
        }
    }
    
    *returnSize = count;
    return result;
}
