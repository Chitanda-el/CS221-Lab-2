#include "..\template.h"

// Bubble Sort on a single vector of ints //////////////////////////////////////////////////////////
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

// Bubble sort on each int member of dataStruct independently //////////////////////////////////////
void bubbleSort(vector<dataStruct>& localVec) {
    int n = localVec.size();
    bool swapped;

    for (int intMember = 0; intMember < numIntsInStruct; ++intMember) { // Iterate through each int member
        for (int j = 0; j < n - 1; j++) {
            swapped = false;
            for (int k = 0; k < n - j - 1; k++) {
                if (*(&localVec[k].intOne + intMember) > *(&localVec[k + 1].intOne + intMember)) {
                    swap(*(&localVec[k].intOne + intMember), *(&localVec[k + 1].intOne + intMember));
                    swapped = true;
                }
            }
            if (!swapped)   // If no two elements were swapped, then break
                break;
        }
    }
}