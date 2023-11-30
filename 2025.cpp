// Write an interface for user input. The function is as follows
// (1) Insert an integer into the array (hint: use insertion sort)
// (2) Find an integer and print it out (using linear search method)
// (3) Find an integer and print it out (using binary search method)
// (4) Print out the current information (from small to large)
// (5) leave

#include <iostream>
using namespace std;
#define N 6
void insertionSort(int arr[], int n){

    for (int i = 1; i < n; i++)
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
        }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int choice = 0;
    
    // Input array
    int arr[N];
    // size of array
    int n = 0;
    
    while (true) {
        cin >> choice;
    // choice = 1, please enter data
        if (choice == 1) {
            // Input data
            if (n == 0){
                
            }
            // size of input array  
            // sizeof operator returns the size of of type in bytes, int type is 4 bytes
            int n =  sizeof(arr) / sizeof(arr[0]);
            // Call the insertionSort function
            insertionSort(arr,n);
        } 
        // Linear Search
        else if (choice == 2) {

        } 
        // Binary Search
        else if (choice == 3) {

        } 
        // print the sorted array
        else if (choice == 4) {
            printArray(arr,n);
        } 
        // Exit
        else if (choice == 5)
        return 0;
    }

    return 0;
}