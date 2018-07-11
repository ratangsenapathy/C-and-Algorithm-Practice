//
//  sort.hpp
//  C++ library
//
//  Created by Ratan Senapathy on 6/29/18.
//  Copyright © 2018 Ratan Senapathy. All rights reserved.
//

#ifndef sort_hpp
#define sort_hpp

enum SortOrder
{
    Asc,
    Desc
};
template<typename T>
class Sort
{
private:
    static inline       bool        isGreater          (const T &a,const T &b) { return a > b; }
    static inline       bool        isLesser           (const T &a,const T &b) { return a < b; }
    static              void        mergeSortInternal  (T *arr,unsigned int start, unsigned int end, SortOrder order);
public:
    static              void        bubbleSort         (T *arr,unsigned int n, SortOrder order = SortOrder::Asc);
    static              void        selectionSort      (T *arr,unsigned int n, SortOrder order = SortOrder::Asc);
    static              void        insertionSort      (T *arr,unsigned int n, SortOrder order = SortOrder::Asc);
    static              void        mergeSort          (T *arr,unsigned int n, SortOrder order = SortOrder::Asc);
};

#include "sort.cpp"
#endif /* bubblesort_hpp */
