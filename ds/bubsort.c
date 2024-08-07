#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, i;
    printf("Enter limit:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d integrs:",n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unsorted array: \n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}
// #include <stdio.h>
// #include <stdlib.h>

// void bubbleSort(int arr[], int n, int* time) {
//     int i, j, temp;
//     for (i = 0; i < n-1; i++) {
//         for (j = 0; j < n-i-1; j++) {
//             (*time)++;
//             if (arr[j] > arr[j+1]) {
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//                 (*time)++;
//             }
//         }
//     }
// }

// void printArray(int arr[], int size, int* time) {
//     int i;
//     for (i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//         (*time)++;
//     }
//     printf("\n");
//     (*time)++;
// }

// int main() {
//     int n, i;
//     int time = 0;
//     int space = 0;

//     printf("Enter limit: ");
//     scanf("%d", &n);
//     time++;

//     int* arr = (int*)malloc(n * sizeof(int)); // dynamically allocate array to measure memory usage
//     space += n * sizeof(int); // space for the array

//     printf("Enter the %d integers: ", n);
//     time++;
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//         time++;
//     }

//     printf("Unsorted array: \n");
//     time++;
//     printArray(arr, n, &time);

//     bubbleSort(arr, n, &time);

//     printf("Sorted array: \n");
//     time++;
//     printArray(arr, n, &time);

//     // Calculate total space used by variables
//     space += sizeof(n) + sizeof(i) + sizeof(time) + sizeof(space);

//     printf("Time Complexity:\n");
//     printf("Total operations: %d\n", time);

//     printf("Space Complexity:\n");
//     printf("Size of array: %lu bytes\n", n * sizeof(int));
//     printf("Size of other variables: %lu bytes\n", sizeof(n) + sizeof(i) + sizeof(time) + sizeof(space));
//     printf("Total space used: %d bytes\n", space);

//     free(arr); // free dynamically allocated memory

//     return 0;
// }

