#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    if(argc > 1)
    {
        while(argv[++i])
        {
            j = -1;
            while(argv[i][++j])
            {
                if(argv[i][j] >='a' && argv[i][j] <='z')
                    argv[i][j] -= 32;
            }
            std::cout << argv[i];
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
}