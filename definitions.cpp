#include <iostream>
#include <ctime>

#include "Sorting Algorithms\bubbleSort.cpp"
#include "Sorting Algorithms\mergeSort.cpp"
#include "Sorting Algorithms\quickSort.cpp"

// Computes and outputs the time taken by the specified sorting algorithm
// to sort a vector over a specified number of iterations
template <typename T> cmpTime::cmpTime(vector<T>& byRefVec, const int sortingAlgo)
{
    vector<T> localVec = byRefVec;  // Local copy of the vector to be sorted
    for (int i = 0; i < numIterations; i++) // Repeat sorting for specified number of iterations
    {
        auto start = high_resolution_clock::now();  // Start timer for the given iteration
        if (sortingAlgo == bubble_sort) // Call appropriate sorting algorithm based on sortingAlgo
            bubbleSort(localVec);
        else if (sortingAlgo == merge_sort)
            mergeSort(localVec, 0, localVec.size() - 1);
        else if (sortingAlgo == quick_sort) {
            quickSort(localVec, 0, localVec.size() - 1);
        }
        auto stop = high_resolution_clock::now();   // Stop timer

        // Increment duration w/ time taken for this iteration
        duration += duration_cast<microseconds>(stop - start);
        localVec = byRefVec;    // Reset localVec to unsorted state for the next iteration
    }

    // Output the total time taken for all iterations of the sorting algorithm
    string sortingAlgorithm;
    if      (sortingAlgo == 0) { sortingAlgorithm = "Bubble"; }
    else if (sortingAlgo == 1) { sortingAlgorithm = "Merge"; }
    else if (sortingAlgo == 2) { sortingAlgorithm = "Quick"; }
    cout << sortingAlgorithm << " Sort Time: " << duration.count()/1000 << "ms" << endl;
}