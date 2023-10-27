
//write a program to  sort an array using buuble sorting 
#include <stdio.h>

int main() {
    int arr[] = {5, 2, 15, 10, 40, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array are :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    //starting bubble sorting from here 
    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nSorted array are :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
 