//
// Created by T D  on 10/23/23.
//
#include <iostream>
#include "BubbleSort.h"

void BubbleSort::sort(int* array, int length) {
    //std::cout << "Size: " << sizeof (array) << std::endl; //sizeof(array) is actually sizeof(array pointer), which is 8;
//length--;
    for (int i = 0; i < length-1; i++) {//can't compare last val with next, none next;
        for (int j = 0; j < length - 1 -i; j++) {
            if (array[j] > array[j+1]) {
                int temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }

        }
    }
}