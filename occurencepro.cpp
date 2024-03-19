#include<iostream>
#include<algorithm>
using namespace std;

int first_o(int arr[], int size, int key) {
    int start = 0;
    int ans = -1; // Initialize ans to -1
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1; // Move to the left to find the first occurrence
        } else if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return ans;
}

int last_o(int arr[], int size, int key) {
    int start = 0;
    int ans = -1; // Initialize ans to -1
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            ans = mid;
            start = mid + 1; // Move to the right to find the last occurrence
        } else if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return ans;
}

int main() {
    int arr[] = {1, 3, 4, 2, 2, 2, 2, 22, 2, 2, 2, 3, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    stable_sort(begin(arr), end(arr));

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int key = 2;
    pair<int, int> p;
    p.first = first_o(arr, size, key);
    p.second = last_o(arr, size, key);

    cout << "Pair: (" << p.first << ", " << p.second << ")" << endl;

    return 0;
}

