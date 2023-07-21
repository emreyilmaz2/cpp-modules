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
    return((a < b) ? a : b);
}

template<typename t_max> t_max max(t_max &a, t_max &b)
{
    return((a > b) ? a : b);
}



#endif