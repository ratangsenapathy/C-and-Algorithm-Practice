//
//  sort.cpp
//  C++ library
//
//  Created by Ratan Senapathy on 6/29/18.
//  Copyright © 2018 Ratan Senapathy. All rights reserved.
//

#ifdef sort_hpp

template<typename T>
void Sort<T>::bubbleSort(T *arr,unsigned int n, SortOrder order)
{
    assert(arr !=nullptr);
    assert(n>0);
    
    std::function<bool(int,int)> comparator = (order == SortOrder::Asc) ? isGreater: isLesser;
    for(int i =0; i< n-1; i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(comparator(arr[j],arr[j+1]))
            {
                std::swap(arr[j],arr[j+1]);
            } 
        }
    }
}

template<typename T>
void Sort<T>::selectionSort(T *arr, unsigned int n, SortOrder order)
{
    std::function<bool(int,int)> comparator = (order == SortOrder::Asc) ? isLesser: isGreater;
    for(int i=0;i<n-1;i++)
    {
        int compareIndex = i;
        for(int j = i+1;j<n;j++)
        {
            if(comparator(arr[j],arr[compareIndex]))
            {
                compareIndex = j;
            }
        }
        
        std::swap(arr[i], arr[compareIndex]);
    }
}

template<typename T>
void Sort<T>::insertionSort(T *arr, unsigned int n, SortOrder order)
{
    std::function<bool(int,int)> comparator = (order == SortOrder::Asc) ? isGreater: isLesser;
    for(int i=1;i<n;i++)
    {
        T key = arr[i];
        int j = i-1;
        while(j>=0 && comparator(arr[j],key))
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

template<typename T>
void Sort<T>::mergeSort(T *arr, unsigned int n, SortOrder order)
{
    Sort<T>::mergeSortInternal(arr,0,n-1,order);
}

template<typename T>
void Sort<T>::mergeSortInternal(T *arr,unsigned int start, unsigned int end, SortOrder order)
{
    int count = end-start+1;
    if(count>2)
    {
        mergeSort
    }
}

#endif
