#include <stdio.h>

void inputArray(int* array, int n) {
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
}

int main() {
    int n;

    printf("Enter the limit of the array: ");
    scanf("%d", &n);

    int a[n];

    inputArray(a, n);

    printf("The array elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    int i =0,j,s,tep;

    while (i < n-1) {
        s = i;
        j = i + 1;
        while (j < n) {
            if (a[j] < a[s]) {
                s = j;
            }
            j++;
        }
        tep = a[s];
        a[s] = a[i];
        a[i] = tep;
        i++;
    }
    
    printf("Sorted array: ");
    i = 0;
    while (i < n) {
        printf("%d ", a[i]);
        i++;
    }
    printf("\n");

    return 0;
}

