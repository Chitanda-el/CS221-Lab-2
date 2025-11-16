#include <ctime>

#include "Sorting Algorithms\bubbleSort.cpp"
#include "Sorting Algorithms\mergeSort.cpp"
#include "Sorting Algorithms\quickSort.cpp"

// Valid values for sortingAlgo: 0, 1, 2; respectively refer to: bubble sort, merge sort, quick sort
template <typename T> cmpTime::cmpTime(vector<T>& byRefVec, const int sortingAlgo)
{
    vector<T> localVec = byRefVec;
    for (int i = 0; i < 1000; i++)
    {
        auto start = high_resolution_clock::now();
        if (sortingAlgo == 0)
            bubbleSort(localVec);
        else if (sortingAlgo == 1)
            mergeSort(localVec, 0, localVec.size() - 1);
        else if (sortingAlgo == 2)
            continue;
            // quickSort(localVec, 0, localVec.size() - 1);
        auto stop = high_resolution_clock::now();

        duration += duration_cast<microseconds>(stop - start);
        localVec = byRefVec;
    }

    string sortingAlgorithm;
    if (sortingAlgo == 0)
        sortingAlgorithm = "Bubble";
    else if (sortingAlgo == 1)
        sortingAlgorithm = "Merge";
    else if (sortingAlgo == 2)
        sortingAlgorithm = "Quick";
    cout << sortingAlgorithm << " Sort Time: " << duration.count()/1000 << "ms" << endl;
}