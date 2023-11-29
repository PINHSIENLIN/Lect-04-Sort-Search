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
   
    // Input method
    int num;
    cin >> num;

   if (num == 1){
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
   }
   else if (num == 2) {
        // Selection Sort
        for (int i = 0; i < N - 1; i++) {
            // take turns as min_index default is 0
            int min_index = i;
            for (int j = i + 1; j < N; j++)
            {
                if (arr[j] < arr[min_index]){
                    min_index = j;
                }
            }
        swap(arr[i], arr[min_index]);

        printArray(arr, N);
        }
   }
   else if (num == 3) {
        // Insertion Sort
        for (int i = 1; i < N; i++)
        {
            int key = arr[i];
            // Index of the previous element
            int j = i - 1;
            while (key < arr[j] && j >= 0)
            {
                // Move elements of arr[0..i-1] that are greater than key to one position ahead of their current position
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            
            // Place the current element (key) at its correct position in the sorted sequence
            arr[j + 1] = key;

            printArray(arr, N);
        }
   }
    printArray(arr, N);
    
    return 0;
}