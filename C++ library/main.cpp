//
//  main.cpp
//  C++ library
//
//  Created by Ratan Senapathy on 6/29/18.
//  Copyright © 2018 Ratan Senapathy. All rights reserved.
//

#include <iostream>
#include "Sorts/bubblesort.cpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int arr[] = {5,8,6,2,1};
    BubbleSort<int>::sort(arr, 5);
    
    for(int a : arr)
    {
        std::cout << a << std::endl;
    }
    return 0;
}
