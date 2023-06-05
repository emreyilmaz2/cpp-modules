#include <iostream>

float a(float f1, float f2){
    if(f2 == 0)
        throw 404;
    else
        return f1/f2;
}
int main()
{
    float f1;
    float f2;
    std::cin >> f1;
    std::cin >> f2;
    try{
        std::cout << a(f1, f2) << std::endl;
    } catch (int e ){
        std::cout << "Error! you are trying to divide a number to 0!!" << std::endl;
    }
}