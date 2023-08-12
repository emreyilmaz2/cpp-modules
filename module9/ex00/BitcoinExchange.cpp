#include "BitcoinExchange.hpp"

bool isValid(const std::string &row, float &value){
    if(std::count(row.begin(), row.end(), '|') < 1){
        std::cout << "Error: bad input => " << row << std::endl;
        return false;
    }
    else if(value < 0){
        std::cout << "Error: not a positive number." << std::endl;
        return false;
    }
    else if(value > 1000){
        std::cout << "Error: too large a number." << std::endl;
        return false;
    }
    return true;
}

// Bu fonksiyonda tarihe göre elimizde bulunan bitcoinlerin o anki döviz kuruyla
// karşılaştırılarak ne kadar değeri olduğunu bulmamıza yarar.
void howMuchDoTheyWorth(std::map<std::string, double> &db, std::fstream &ifs){
    std::string row, sub;
    float value;
    getline(ifs, row);
    while(getline(ifs, row)){
        sub = row.substr(0, row.find('|') - 1);
        value = std::stof(row.substr(row.find('|')+2, row.length()));
        if(!isValid(row, value))
            continue;
        else{
            std::map<std::string, double>::iterator it = db.find(sub);
            std::map<std::string, double>::iterator it_equal = db.lower_bound(sub);
            if(it != db.end())
                std::cout << sub << " => " << value << " = " << it->second * value << std::endl;
            else if(it_equal != db.end())
                std::cout << sub << " => " << value << " = " << (--it_equal)->second * value << std::endl;
        }
    }
}

// Bu fonksiyon data.csv dosyasındaki verileri database de depolar.
// db -> database  --  fs -> file stream
void fillDataBase(std::map<std::string, double> &db){
    std::string line;
    std::fstream dbStream ("data.csv", std::ios::in);
    while(getline(dbStream, line)){
        std::stringstream str(line);
        std::string key, value;
        getline(str, key, ',');
        getline(str, value, ',');
        if(value != "exchange_rate")
            db.insert(std::make_pair(key, std::stod(value)));
    }
}