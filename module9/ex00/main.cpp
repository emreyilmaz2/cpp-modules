#include "BitcoinExchange.hpp"
#include <vector>
#include <fstream>
#include <sstream>

int main(int argc, char *argv[])
{
    std::fstream file (argv[1], std::ios::in);
    std::vector< std::vector<std::string> > content; // bu da bircok sirayi bir arada tutan veri yapisi
    std::vector< std::string> row; // bir sira anlamina geliyor
    std::string line, word;

    if(argc != 2 || !file.is_open())
        std::cout << " Error: could not open file. " << std::endl;
    
    while(getline(file, line)){
        row.clear();
        std::stringstream str(line);
        while(getline(str, word, '|'))
            row.push_back(word);
        content.push_back(row);
    }
    size_t a = content.size();
    for (size_t i = 0; i < a; i++){
        std::string s = content[i][0];
        row.clear();
        std::stringstream str(content[i][0]);
        while(getline(str, word, '-'))
            row.push_back(word);
        content.push_back(row);
        row.clear();
        row.push_back(content[i][1]);
        content.push_back(row);
    }
    for (size_t i = 0; i < content.size(); i++)
    {
        for (size_t m = 0; m < content[i].size(); m++)
        {
            std::cout << content[i][m] << "*";
        }
        std::cout << std::endl;
    }
    
}