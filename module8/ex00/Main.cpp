#include "easyfind.hpp"

int main()
{
    // trying containers with integers
    try{
        char array[] = {'a', 'b', 'd', 'c', 'e', 'y', 'q', 'w'};
        std::cout << "index of the d is : " << ::easyfind(array, 'd') << std::endl;
        std::cout << "index of the y is : " << ::easyfind(array, 'y') << std::endl;
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
}


// int main()
// {
//     try{
//         int arr[] = {10,20,30};
//         std::vector<int> v(arr, arr + 3);
//         ::easyfind(v, 200);
//     }
//     catch(const std::exception& e){
//         std::cerr << e.what() << '\n';
//     }
// }

