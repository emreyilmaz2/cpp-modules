#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

class NoOccurrenceFound : public std::exception{
    const char * what() const throw(){
        return("<<< No Occurrence Found >>>");
    }
};

template<typename T>
int easyfind(T &container, int number)
{
    for(unsigned int i = 0; i < (sizeof(container)/sizeof((container[0]))) ; i++){
        if(container[i] == number)
            return i;
    }
    throw NoOccurrenceFound();
    return 0;
}


// asagidaki sekilde iterator olusturularak da yapilabilir
// template<typename con>
// int easyfind(con& container, int number)
// {
//     std::vector<int>::iterator iter;
//     iter = std::find(container.begin(), container.end(), number);
//     if(iter != container.end())
//     {
//         std::cout << *iter << std::endl;
//         return (0);
//     }
//     else
//         throw NoOccurrenceFound();
//     return (-1);

// }



#endif
