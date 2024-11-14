#include <stdio.h>

int* solution(int n, int* arr, int* returnSize) {
    *returnSize = 1;  // 这里返回默认值
    int* result = (int*)malloc(sizeof(int));
    result[0] = 0;
    return result;
}

int main() {
    int n = 5;
    int arr[] = {2, 5, 3, 2, 2};
    int returnSize;
    int* result = solution(n, arr, &returnSize);
    
    // 输出结果
    for(int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }
    free(result);
    return 0;
}