#include "..\template.h"

// Merge Sort for numberList ///////////////////////////////////////////////////////////////////////

// Merges two subarrays of arr[].
// First subarray is arr[left..mid]
// Second subarray is arr[mid+1..right]
void merge(vector<int>& arr, int left, int mid, int right){
                         
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temp vectors
    vector<int> L(n1), R(n2);

    // Copy data to temp vectors L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0;
    int k = left;

    // Merge the temp vectors back 
    // into arr[left..right]
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], 
    // if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], 
    // if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// begin is for left index and end is right index
// of the sub-array of arr to be sorted
void mergeSort(vector<int>& arr, int left, int right){
    
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

// Merge Sort for dataStruct ///////////////////////////////////////////////////////////////////////

// Merges two subarrays of arr[].
// First subarray is arr[left..mid]
// Second subarray is arr[mid+1..right]
void merge(vector<dataStruct>& arr, int left, int mid, int right){
                         
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temp vectors
    vector<int> L_one(n1), R_one(n2), L_two(n1), R_two(n2), L_three(n1), R_three(n2);

    // SORT intOne ///////////////////////////////////////////////////////////////////////////////
    // Copy data to temp vectors L[] and R[]
    for (int i = 0; i < n1; i++)
        L_one[i] = arr[left + i].intOne;
    for (int j = 0; j < n2; j++)
        R_one[j] = arr[mid + 1 + j].intOne;

    int i = 0, j = 0;
    int k = left;

    // Merge the temp vectors back 
    // into arr[left..right]
    while (i < n1 && j < n2) {
        if (L_one[i] <= R_one[j]) {
            arr[k].intOne = L_one[i];
            i++;
        }
        else {
            arr[k].intOne = R_one[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], 
    // if there are any
    while (i < n1) {
        arr[k].intOne = L_one[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], 
    // if there are any
    while (j < n2) {
        arr[k].intOne = R_one[j];
        j++;
        k++;
    }
    // SORT intTwo ///////////////////////////////////////////////////////////////////////////////
    // Copy data to temp vectors L[] and R[]
    for (int i = 0; i < n1; i++)
        L_two[i] = arr[left + i].intTwo;
    for (int j = 0; j < n2; j++)
        R_two[j] = arr[mid + 1 + j].intTwo;

    i = 0;
    j = 0;
    k = left;

    // Merge the temp vectors back 
    // into arr[left..right]
    while (i < n1 && j < n2) {
        if (L_two[i] <= R_two[j]) {
            arr[k].intTwo = L_two[i];
            i++;
        }
        else {
            arr[k].intTwo = R_two[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], 
    // if there are any
    while (i < n1) {
        arr[k].intTwo = L_two[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], 
    // if there are any
    while (j < n2) {
        arr[k].intTwo = R_two[j];
        j++;
        k++;
    }

    // SORT intThree ///////////////////////////////////////////////////////////////////////////////
    // Copy data to temp vectors L[] and R[]
    for (int i = 0; i < n1; i++)
        L_three[i] = arr[left + i].intThree;
    for (int j = 0; j < n2; j++)
        R_three[j] = arr[mid + 1 + j].intThree;

    i = 0;
    j = 0;
    k = left;

    // Merge the temp vectors back 
    // into arr[left..right]
    while (i < n1 && j < n2) {
        if (L_three[i] <= R_three[j]) {
            arr[k].intThree = L_three[i];
            i++;
        }
        else {
            arr[k].intThree = R_three[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], 
    // if there are any
    while (i < n1) {
        arr[k].intThree = L_three[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], 
    // if there are any
    while (j < n2) {
        arr[k].intThree = R_three[j];
        j++;
        k++;
    }
}

// begin is for left index and end is right index
// of the sub-array of arr to be sorted
void mergeSort(vector<dataStruct>& arr, int left, int right){
    
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}