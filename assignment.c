#include <stdio.h>
#include<limits.h>
// Function to find the second largest element in an array
int secondLargest(int arr[], int n) {
    int max = INT_MIN;
    int second_max = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            second_max = max;
            max = arr[i];
        } else if (arr[i] > second_max && arr[i] != max) {
            second_max = arr[i];
        }
    }

    // If there is no second largest element, return -1
    if (second_max == INT_MIN) {
        return -1;
    }

    return second_max;
}

int main() {
    int arr[10] = {1, 5, 8, 9, 10, 12, 15, 20, 22, 25};
    int second_largest = secondLargest(arr, 10);

    if (second_largest == -1) {
        printf("There is no second largest element in the array.\n");
    } else {
        int diff = arr[9] - second_largest;
        printf("The difference between the last and second largest element is: %d\n", diff);
    }

    return 0;
}