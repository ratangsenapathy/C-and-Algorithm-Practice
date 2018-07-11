//
//  main.cpp
//  C++ library
//
//  Created by Ratan Senapathy on 6/29/18.
//  Copyright © 2018 Ratan Senapathy. All rights reserved.
//

#include <iostream>
#include "Sorts/sort.hpp"

int main(int argc, const char * argv[]) {

    std::cout << "Hello, World!\n";
    int arr[] = {5,8,6,2};
    //Sort<int>::bubbleSort(arr,4,SortOrder::Desc);
    Sort<int>::insertionSort(arr, 4,SortOrder::Desc);
    for(int a : arr)
    {
        std::cout << a << std::endl;
    }
    return 0;
}
