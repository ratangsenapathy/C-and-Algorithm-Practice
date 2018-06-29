//
//  bubblesort.cpp
//  C++ library
//
//  Created by Ratan Senapathy on 6/29/18.
//  Copyright © 2018 Ratan Senapathy. All rights reserved.
//

#include "bubblesort.hpp"

template<typename T>
void BubbleSort<T>::sort(T *arr,int n)
{
    for(int i =0; i< n-1; i++)
    {
        for(int j=i;j<n-i-1;j++)
        {
            if(arr[j] >arr[i])
            {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
