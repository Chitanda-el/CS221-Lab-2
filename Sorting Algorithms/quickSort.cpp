/*
The code for this quick sort implementation is taken from GeeksforGeeks and uses Lomuto's partition.
I've adapted it to work with dataStruct using pointer arithmetic... yikes.
*/

#include "..\template.h"

// Quick Sort for numberList ///////////////////////////////////////////////////////////////////////
int partition(vector<int> &vec, int low, int high) {
    
    int pivot = vec[high];  // Selecting last element as the pivot

    int i = (low - 1);  // Index of elemment just before the last element it is used for swapping

    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than or equal to pivot
        if (vec[j] <= pivot) {
            i++;
            swap(vec[i], vec[j]);
        }
    }

    swap(vec[i + 1], vec[high]);    // Put pivot to its position

    return (i + 1); // Return the point of partition
}

void quickSort(vector<int>& vec, int low, int high) {
    // Base case: This part will be executed till the starting
    // index low is lesser than the ending index high
    if (low < high) {
        int pi = partition(vec, low, high); // pi is Partitioning Index

        // Separately sort elements before and after the partition Index pi
        quickSort(vec, low, pi - 1);
        quickSort(vec, pi + 1, high);
    }
}

// Quick Sort for dataStruct ///////////////////////////////////////////////////////////////////////
int partition(vector<dataStruct>& localVec, int low, int high, const int& memberToSort) {

    int* pivot = &localVec[high].intOne + memberToSort; // Selecting last element as the pivot(s)

    int i = (low - 1);  // Index of element just before the last element (it is used for swapping)

    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than or equal to pivot
        if (*(&localVec[j].intOne + memberToSort) <= *pivot) {
            i++;
            swap(*(&localVec[i].intOne + memberToSort), *(&localVec[j].intOne + memberToSort));
        }
    }

    // Put pivot to its position
    swap(*(&localVec[i + 1].intOne + memberToSort), *(&localVec[high].intOne + memberToSort));

    return (i + 1); // Return the point of partition
}

void quickSort(vector<dataStruct>& localVec, int low, int high, const int& memberToSort) {
    // Base case: This part will be executed till the starting
    // index low is lesser than the ending index high
    if (low < high) {
        int pi = partition(localVec, low, high, memberToSort);    // pi is Partitioning Index

        // Separately sort elements before and after the partition Index
        quickSort(localVec, low, pi - 1, memberToSort);
        quickSort(localVec, pi + 1, high, memberToSort);
    }
}

// Calls appropriate quickSort based on vector type ////////////////////////////////////////////////
template <typename T> void quickSort(vector<T>& localVec, int low, int high)
{
    if (is_same_v<T, int>) {
        quickSort(localVec, low, high);
    } else if (is_same_v<T, dataStruct>) {
        quickSort(localVec, low, high, 0);  // Last parameter specifies which member
        quickSort(localVec, low, high, 1);  // of dataStruct to sort;
        quickSort(localVec, low, high, 2);  // 0 = intOne, 1 = intTwo, 2 = intThree
    }
}