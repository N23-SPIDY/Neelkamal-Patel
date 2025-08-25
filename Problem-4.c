#include <stdio.h>

int main() {
    int arr[] = {1,2,8,9,12,46,76,82,15,20,30};
    int size = sizeof(arr)/sizeof(arr[0]);
    int result[10] = {0}; // index 1 to 9 used

    for (int i = 1; i <= 9; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[j] % i == 0) {
                count++;
            }
        }
        result[i] = count;
    }

    printf("Output:\n");
    for (int i = 1; i <= 9; i++) {
        printf("%d: %d\n", i, result[i]);
    }

    return 0;
}
