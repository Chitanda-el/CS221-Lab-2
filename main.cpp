/*
This program compares the time taken by Bubble Sort, Merge Sort,
and Quick Sort to sort a vector of random integers and a vector of structs
each containing three integer members, all containing random values.
Each vector contains a specified number of elements and the sort is performed
a specified number of times (templates.h).
*/

#include "definitions.cpp"

int getRand();

int main ()
{
    vector<int> numberList;
    vector<dataStruct> structData;
 
    // Creates a vector of dataStructs with random int members AND a vector of random integers
    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < numElements; i++) {
        structData.push_back({getRand(), getRand(), getRand()});
        numberList.push_back(getRand());
    }

    cmpTime(numberList, merge_sort);
    cmpTime(numberList, quick_sort);
    cmpTime(numberList, bubble_sort);

    cmpTime(structData, merge_sort);
    cmpTime(structData, quick_sort);
    cmpTime(structData, bubble_sort);

    return 0;
}

// Generates random numbers [1, maxRandNum]
int getRand() {
    int randNum = (rand() % maxRandNum) + 1;
    return randNum;
}