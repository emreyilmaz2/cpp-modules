#include "BitcoinExchange.hpp"

int main(int argc, char *argv[])
{
    std::fstream inputStream (argv[1], std::ios::in);
    if(argc != 2){
        std::cerr << " Error: wrong argument count. " << std::endl;
        return (1);
    }
    if(!inputStream.is_open()){
        std::cout << " Error: could not open file. " "-> " << argv[1] << std::endl;
        return (1);
    }
    std::map<std::string, double> mydb;
    fillDataBase(mydb);
    howMuchDoTheyWorth(mydb, inputStream);
    inputStream.close();
}