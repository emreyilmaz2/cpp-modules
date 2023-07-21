#include "Array.hpp"

// if you want to test is there a problem with allocation use this a func
// void a(){

//     // construction with no parameter
//     Array<int> emptyArray;
//     std::cout << "Empty array size : " << emptyArray.size() << std::endl;

//     //construction with unsigned int parameter
//     Array<int> integerArray(5);
//     std::cout << "integer array size : " << integerArray.size() << std::endl;

//     // copy constructor
//     Array<int> copyArray(integerArray);
//     std::cout << "the copy of integerArray size : " << copyArray.size() << std::endl;

//     //modify copyArray
//     copyArray[2] = 100;
//     std::cout << "intArray[2]: " << integerArray[2] << std::endl;
//     Array<int>* intArrayPtr;
//     intArrayPtr = new Array<int>(5);
    
//     (*intArrayPtr)[0] = 10;
//     (*intArrayPtr)[1] = 20;
//     (*intArrayPtr)[2] = 30;
//     (*intArrayPtr)[3] = 40;
//     (*intArrayPtr)[4] = 50;
    
//     // Dizi boyutuna erişim yapabiliriz.
//     size_t size = intArrayPtr->size();
//     std::cout << "Array size: " << size << std::endl;

//     // Dizi elemanlarını ekrana yazdırabiliriz.
//     for (size_t i = 0; i < size; i++) {
//         std::cout << "Element " << i << ": " << (*intArrayPtr)[i] << std::endl;
//     }
    
//     delete intArrayPtr;
// }

int main(){
    // a();
    // while(1);


    Array<int> emptyArray;
    std::cout << "Empty array size : " << emptyArray.size() << std::endl;

    std::cout << std::endl;
    //construction with unsigned int parameter
    Array<int> integerArray(5);
    std::cout << "integer array size : " << integerArray.size() << std::endl;

    // copy constructor
    std::cout << std::endl;
    Array<int> copyArray(integerArray);
    std::cout << "the copy of integerArray size : " << copyArray.size() << std::endl;

    //modify copyArray
    std::cout << std::endl;
    copyArray[2] = 100;
    std::cout << "intArray[2]: " << integerArray[2] << std::endl;
    std::cout << "copiedArray[2]: " << copyArray[2] << std::endl;

    //copy assignment array
    std::cout << std::endl;
    Array<int> assignmnetArray;
    assignmnetArray = integerArray;

    //modify it
    std::cout << std::endl;
    assignmnetArray[3] = 999;
    std::cout << "intArray[3]: " << integerArray[3] << std::endl;
    std::cout << "assignmentArray[3]: " << assignmnetArray[3] << std::endl;

    //index out of bounds test
    std::cout << std::endl;
    try{
        std::cout << "assignmentArray[6]: is not available" << assignmnetArray[6] << std::endl;
    }
    catch(const std::exception& e){
        std::cerr << e.what();
    }

    std::cout << std::endl;
    {
    Array<int> blockArray(10); // Örnek olarak 10 elemanlı bir dizi oluşturuyoruz.
    // blockArray'nin kullanılması
    // blockArray burada kapsam dışına çıkıyor ve bellekteki hafıza geri veriliyor.
    }
    Array<int>* intArrayPtr;
    intArrayPtr = new Array<int>(5);
    
    (*intArrayPtr)[0] = 10;
    (*intArrayPtr)[1] = 20;
    (*intArrayPtr)[2] = 30;
    (*intArrayPtr)[3] = 40;
    (*intArrayPtr)[4] = 50;
    
    std::cout << std::endl;
    // Dizi boyutuna erişim yapabiliriz.
    size_t size = intArrayPtr->size();
    std::cout << "Array size: " << size << std::endl;

    std::cout << std::endl;
    // Dizi elemanlarını ekrana yazdırabiliriz.
    for (size_t i = 0; i < size; i++) {
        std::cout << "Element " << i << ": " << (*intArrayPtr)[i] << std::endl;
    }
    delete intArrayPtr;
}