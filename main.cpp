#include <iostream>
#include "bubbleSort.h"
int main() {
    BubbleSort bs;
    std::cout << "unSorted Array: " << std::endl;
    int* myArray = new int[10];
    for (int i = 0; i < 10; i++) {
        myArray[i] = 10 - i;
        std::cout << "myArray[" << i << "]:" << myArray[i] << std::endl;
    }
    std::cout << std::endl;
    /*for (int i = 0; i < 10; i++) {
        std::cout << "myArray[" << i << "]:" << myArray[i] << std::endl;
    }*/


    std::cout << std::endl;
    std::cout << "Sorted Array: " << std::endl;
    bs.sort(myArray, 10);

    for (int i = 0; i < 10; i++) {
        std::cout << "myArray[" << i << "]:" << myArray[i] << std::endl;
    }

    return 0;
}
