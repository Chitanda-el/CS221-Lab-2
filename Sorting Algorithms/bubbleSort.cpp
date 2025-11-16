#include "..\template.h"

// Bubble Sort on a single vector of ints
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;
  
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // If no two elements were swapped, then break
        if (!swapped)
            break;
    }
}

// Bubble sort on each int member of dataStruct independently
void bubbleSort(vector<dataStruct>& arr) {
    int n = arr.size();
    bool swapped;
  
    for (int i = 0; i < n - 1; i++) {   // Sort intOne independently
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].intOne > arr[j + 1].intOne) {
                swap(arr[j].intOne, arr[j + 1].intOne);
                swapped = true;
            }
        }
        if (!swapped)   // If no two elements were swapped, then break
            break;
    }
    for (int i = 0; i < n - 1; i++) {   // Sort intTwo independently
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].intTwo > arr[j + 1].intTwo) {
                swap(arr[j].intTwo, arr[j + 1].intTwo);
                swapped = true;
            }
        }
        if (!swapped)   // If no two elements were swapped, then break
            break;
    }
    for (int i = 0; i < n - 1; i++) {   // Sort intThree independently
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].intThree > arr[j + 1].intThree) {
                swap(arr[j].intThree, arr[j + 1].intThree);
                swapped = true;
            }
        }
        if (!swapped)   // If no two elements were swapped, then break
            break;
    }
}