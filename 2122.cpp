// Write an interface for user input. The function is as follows
// (1) Insert a string into the array (hint: use insertion sort method), there is no output during the process
// (2) (Use linear search method) Find a string and print the process and results
// (3) (Use binary search method) to find a string and print out the process and results
// The format of the printout process is: index value: value\n
// (4) Print out the current information (from small to large)
// Input command 4 is to print out the data, and the output is a sorted string, with a blank after each string.
// (5) leave

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
#define N 10000

int linearSearch(string arr[], int n, string x){
     for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
     }
     return -1;
}

int binarySearch(string arr[], int n, string x){
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

void printArray(string arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int choice;
    
    // Input array
    string arr[N];
    // size of array
    int n = 0;

    while (true) {
        cin >> choice;
    // choice = 1, please enter data
        if (choice == 1) {
            string data;
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
            string value;
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
                cout << "found: " << arr[index] << endl;
            } 

        } 
        // Binary Search
        else if (choice == 3) {
            string value;
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
                cout << "found: " << arr[index] << endl;
            } 
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