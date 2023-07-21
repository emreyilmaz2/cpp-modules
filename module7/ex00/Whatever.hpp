#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename t_swap> void swap(t_swap &a, t_swap &b){
    t_swap temp;

    temp = a;
    a = b;
    b = temp;
}

template<typename t_min> t_min min(t_min &a, t_min &b)
{
    if(a == b)
        return b;
    else if(a < b)
        return a;
    return b;
}

template<typename t_max> t_max max(t_max &a, t_max &b){
    if(a == b)
        return b;
    else if(a > b)
        return a;
    return b;
}



#endif