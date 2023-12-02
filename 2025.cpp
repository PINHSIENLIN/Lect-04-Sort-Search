// Write an interface for user input. The function is as follows
// (1) Insert an integer into the array (hint: use insertion sort)
// (2) Find an integer and print it out (using linear search method)
// (3) Find an integer and print it out (using binary search method)
// (4) Print out the current information (from small to large)
// (5) leave

#include <iostream>
#include <cmath>
using namespace std;
#define N 10000

// void insertionSort(int arr[], int n){

//     for (int i = 1; i < n; i++)
//         {
//         int key = arr[i];
//         // Index of the previous element
//         int j = i - 1;
//         while (key < arr[j] && j >= 0)
//         {
//          // Move elements of arr[0..i-1] that are greater than key to one position ahead of their current position
//         arr[j + 1] = arr[j];
//         j = j - 1;
//         }
//         // Place the current element (key) at its correct position in the sorted sequence
//         arr[j + 1] = key;
//         }
// }

int linearSearch(int arr[], int n, int x){
     for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
     }
     return -1;
}

int binarySearch(int arr[], int n, int x){
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = round(double(low + high) / 2);
        if (arr[mid] == x) {
            return mid;
        }
        else if (arr[mid] < x) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
     }
    return -1;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int choice;
    
    // Input array
    int arr[N];
    // size of array
    int n = 0;

    while (true) {
        cin >> choice;
    // choice = 1, please enter data
        if (choice == 1) {
            int data;
            cin >> data;
            if (n == 0) {
                arr[0] = data;
            } else {
              // Previous index
              int i = n - 1;
               while (i >= 0 && arr[i] > data) {
                arr[i + 1] = arr[i];
                i--;
              } 
              arr[i + 1] = data;
            }
            n++;
        }       
        // Linear Search
        else if (choice == 2) {
            int value;
            cin >> value;
            int index = linearSearch(arr,n,value);
            for (int i = 0; i <= index; i++)
            {
                if (arr[index] == value){
                    cout << i << ": " << arr[i] << endl;
                  } 
                else
                 break;
            }
            
            if (arr[index] == value) {
                cout << "found " << arr[index] << endl;
            } else 
                cout << "not found" << endl;

        } 
        // Binary Search
        else if (choice == 3) {
            int value;
            cin >> value;
            int index = binarySearch(arr,n,value);
            // Process
            int low = 0, high = n - 1;
        
                while (low <= high) {
                    int mid = round(double(low + high) / 2);
                    if (arr[mid] == value) {
                        cout << mid << ": " << arr[mid] << endl;
                        break;
                    }
                    else if (arr[mid] < value) {
                        cout << mid << ": " << arr[mid] << endl;
                        low = mid + 1;
                        
                    } 
                    else {
                        cout << mid << ": " << arr[mid] << endl;
                        high = mid - 1;
                    }
                }

            if (arr[index] == value) {
                cout << "found " << arr[index] << endl;
            } else 
                cout << "not found" << endl;
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