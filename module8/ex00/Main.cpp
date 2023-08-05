#include "easyfind.hpp"

int main()
{
    // trying containers with integers
    try{
        int array[] = {0, 1, 2, 3, 4, 5, 6, 9};
        std::cout << "index of the 5 is : " << ::easyfind(array, 5) << std::endl;
        std::cout << "index of the 9 is : " << ::easyfind(array, 9) << std::endl;
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

