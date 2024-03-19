#include<iostream>
using namespace std;

// Function declaration
int getLength(char arr[]);
void print_array(char arr[]);
bool compareArray(char arr[], char brr[]);
void copying_string(char arr[], char crr[]);
void concatArray(char arr[], char brr[]);
void reversestring(char arr[]);

int main() {
    char arr[100] = "akshita";
    reversestring(arr);

    char brr[] = "gera";
    int num = compareArray(arr, brr);
    cout << "output is " << num << endl;

    return 0;
}

// Function definitions
int getLength(char arr[]) {
    int count = 0;
    int index = 0;

    while (arr[index] != '\0') {
        count++;
        index++;
    }

    return count;
}

void print_array(char arr[]) {
    int i = 0;
    while (arr[i] != '\0') {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
}

bool compareArray(char arr[], char brr[]) {
    int aindex = 0;
    int bindex = 0;
    int aLength = getLength(arr);

    while (aindex < aLength) {
        if (arr[aindex] != brr[bindex]) {
            return false;
        } else {
            aindex++;
            bindex++;
        }
    }

    return true;
}

void copying_string(char arr[], char crr[]) {
    int index = 0;

    while (arr[index] != '\0') {
        crr[index] = arr[index];
        index++;
    }

    cout << endl;
    print_array(crr);
}

void concatArray(char arr[], char brr[]) {
    int aindex = getLength(arr);
    int bindex = 0;

    while (brr[bindex] != '\0') {
        arr[aindex] = brr[bindex];
        aindex++;
        bindex++;
    }

    arr[aindex] = '\0';

    print_array(arr);
}

void reversestring(char arr[]) {
    int length = getLength(arr);
    int index = 0;

    while (index < length) {
        cout << arr[length - 1] << " ";
        index++;
        length--;
    }

    cout << endl;
}
