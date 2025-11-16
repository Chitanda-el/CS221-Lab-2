#include <iostream>

#include "definitions.cpp"

int getRand();

int main ()
{
    srand(static_cast<unsigned int>(time(0)));

    vector<int> numberList;

    vector<dataStruct> structData;
 
    for (int i = 0; i < 10000; i++)
    {   
        structData.push_back({getRand(), getRand(), getRand()});
    }

    // Creates an array of random numbers
    for (int i = 0; i < 10000; i++)
    {
        auto randNum = getRand();
        numberList.push_back(randNum);
    }

    // 0 = Bubble sort, 1 = Merge sort, 2 = Quick sort
    cmpTime(numberList, 1);
    cmpTime(numberList, 2);
    cmpTime(numberList, 0);

    cmpTime(structData, 1);
    //cmpTime(structData, 2);
    cmpTime(structData, 0);

    return 0;
}

// Generates random numbers
int getRand()
{
    int randNum = (rand() % 10000) + 1;
    return randNum;
}