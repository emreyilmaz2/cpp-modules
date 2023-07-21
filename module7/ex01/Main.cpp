#include "iter.hpp"

// void printSquare(int num) {
//     std::cout << num * num << " ";
// }
// void printWithName(std::string str){
//     std::cout << str << " yes this is a name" << std::endl;
// }

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    std::string str[4] = {"emre", "buse", "sema", "rifat"};


    // Fonksiyon şablonunu çağırma
    ::iter(numbers, 5, call);
    std::cout << std::endl;
    ::iter(str, 4, call);
    // Çıktı: 1 4 9 16 25

    return 0;
}