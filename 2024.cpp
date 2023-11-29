// Write an interface for user input. The function is as follows
// (1) Bubble sorting method
// (2) Selection sorting method (find the smallest one and move it to the front)
// (3) Insertion sorting method (starting from [1] in the array and taking turns to be the key)
// Let the user input any 6 numbers, sort the numbers "from small to large" and output the results of each sorting.

#include <iostream>
using namespace std;
#define N 6
// Call by address you passe the exact memory case
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    
    // Input array
    int arr[N];
    
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    // Bubble Sort
    for (int j = N; j > 1; j--){
        // Only do N-1 swap
        for (int i = 0; i < N - 1; i++)
        {
            if (arr[i] > arr[i+1]){
                swap(arr[i], arr[i+1]);
            }
        }
        // Input the workflow step by step
        printArray(arr, N);
    }
    
    // printArray(arr, N);
    
    return 0;
}