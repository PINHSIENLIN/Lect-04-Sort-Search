// Write an interface for user input. The function is as follows
// (1) Bubble sorting method
// (2) Selection sorting method
// (3) Insertion sort method
// Let the user input any 6 numbers, 
// sort the strings (character arrays) from large to small and output the results of each sorting.

#include <iostream>
#include <string>
using namespace std;
#define N 6
// Call by address you passe the exact memory case
void swap(string &a, string &b){
    string temp = a;
    a = b;
    b = temp;
}

void bubbleSort(string arr[], int n){
       // Bubble Sort
        for (int j = N; j > 1; j--){
            // Only do N-1 swap
         for (int i = 0; i < N - 1; i++){
             if (arr[i] < arr[i+1]){
                swap(arr[i+1], arr[i]);
             }
        }
    }
}

void selectionSort(string arr[], int n){
        // Selection Sort
        for (int i = 0; i < N - 1; i++) {
            // take turns as max_index default is 0
            int max_index = i;
            for (int j = i + 1; j < N; j++)
            {
                if (arr[j] > arr[max_index]){
                    max_index = j;
                }
            }
            swap(arr[max_index],arr[i]);
    }
}

void insertionSort(string arr[], int n){
       // Insertion Sort
        for (int i = 1; i < N; i++)
        {
            string key = arr[i];
            // Index of the previous element
            int j = i - 1;
            while (key > arr[j] && j >= 0)
            {
                // Move elements of arr[0..i-1] that are greater than key to one position ahead of their current position
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            
            // Place the current element (key) at its correct position in the sorted sequence
            arr[j + 1] = key;
    }
}

void printArray(string arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
        cout << endl;
}

int main(){
    
    // Input array
    string arr[N];
    
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
   
    // Input method
    int choice;
    cin >> choice;

   if (choice == 1){
        // Bubble Sort
        for (int j = N; j > 1; j--){
        // Only do N-1 swap
            for (int i = 0; i < N - 1; i++){
                if (arr[i] < arr[i+1]){
                    swap(arr[i+1], arr[i]);
              }
            }
            // Process
            for(int k = 0; k < N ; k++){
                cout << arr[k] << " ";
            }
        cout << endl;
    }
}
   
   else if (choice == 2) {
          // Selection Sort
        for (int i = 0; i < N - 1; i++) {
            // take turns as max_index default is 0
            int max_index = i;
            for (int j = i + 1; j < N; j++){
                if (arr[j] > arr[max_index]){
                    max_index = j;
                }            
            }
            swap(arr[max_index],arr[i]);
            // Process
            for(int k = 0; k < N ; k++){
                cout << arr[k] << " ";
            }
        cout << endl;
    }
}
   
   else if (choice == 3) {
            // Insertion Sort
        for (int i = 1; i < N; i++)
        {
          string key = arr[i];
          // Index of the previous element
          int j = i - 1;
          while (key > arr[j] && j >= 0)
            {
                // Move elements of arr[0..i-1] that are greater than key to one position ahead of their current position
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            // Place the current element (key) at its correct position in the sorted sequence
            arr[j + 1] = key;
        // Process
            for(int k = 0; k < N ; k++){
                cout << arr[k] << " ";
            }
        cout << endl;
    }     
}
    printArray(arr, N);
    
    return 0;
}