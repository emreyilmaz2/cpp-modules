#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename t> 
void iter(t *str, unsigned int length, void(*function)(t &arg)){
    for(unsigned int i = 0; i < length; i++){
        function(str[i]);
    }
}

template <typename turna> void call(turna& a){
    std::cout << a << " fnekajnfkale\n";
}
// template<typename t, typename func>
// void iter(t *str, unsigned int length, func function){
//     for(unsigned int i = 0; i < length; i++){
//         function(str[i]);
//     }
// }

#endif