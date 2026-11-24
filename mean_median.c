#include <stdio.h>

int main() {
    int n, i, j, temp;
    int arr[100];
    float sum = 0, mean, median;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    // Mean
    mean = sum / n;

    // Sorting array
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Median
    if(n % 2 == 1) {
        median = arr[n / 2];
    } else {
        median = (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    }

    printf("Mean = %.2f\n", mean);
    printf("Median = %.2f\n", median);

    return 0;
}