#include<iostream>
#include<algorithm>
using namespace std;

int binary_search(int arr[], int size, int key) { // timecomplexity-o(logn)
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start +(end-start)/ 2;   // to prevent int overflow

        if (arr[mid] == key) {
            return mid;  // Found the key at index mid
        } else if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1;  // Key not found in the array
}

int main() {
    int arr[] = {1, 3, 4, 2, 3, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    stable_sort(begin(arr), end(arr));

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int key = 2;
    int ans = binary_search(arr, size, key);
    if (ans != -1) {
        cout << "Element " << key << " found at index " << ans << endl;
    } else {
        cout << "Element " << key << " not found in the array" << endl;
    }

    return 0;
}
