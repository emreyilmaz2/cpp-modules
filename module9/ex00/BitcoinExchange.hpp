#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>

// void getDateAndValue(std::string &row, float &value, std::string& sub){
//     sub = row.substr(0, row.find('|'));
//     value = std::stof(row.substr(row.find('|')+2, row.length()));
// }

// Bu fonksiyonda tarihe göre elimizde bulunan bitcoinlerin o anki döviz kuruyla
// karşılaştırılarak ne kadar değeri olduğunu bulmamıza yarar.
static void howMuchDoTheyWorth(std::map<std::string, float> &db, std::fstream &ifs){
    std::string row;
    std::string sub;
    float value;
    while(getline(ifs, row)){
        if(row == "date | value")
            continue;
        sub = row.substr(0, row.find('|') - 1);
        value = std::stof(row.substr(row.find('|')+2, row.length()));
        if(std::count(row.begin(), row.end(), '|') < 1)
            std::cout << "Error: bad input => " << row << std::endl;
        else if(value < 0)
            std::cout << "Error: not a positive number." << std::endl;
        else if(value > 1000)
            std::cout << "Error: too large a number." << std::endl;
        else{
            for(std::map<std::string, float>::iterator it = db.begin(); it != db.end(); it++){
                if(!sub.compare(it->first)){
                    std::cout << sub << " => " << value << " = " << it->second * value << std::endl;
                    break;
                }
                else if(it->first > sub)
                {
                    std::cout << sub << " => " << value << " = " << (--it)->second * value << std::endl;
                    it++;
                    break;
                }
        }
        }
    }
}

// Bu fonksiyon data.csv dosyasındaki verileri database de depolar.
// db -> database  --  fs -> file stream
static void fillDataBase(std::map<std::string, float> &db, std::fstream &fs){
    std::string line;
    while(getline(fs, line)){
        std::stringstream str(line);
        std::string key, value;
        getline(str, key, ',');
        getline(str, value, ',');
        if(value != "exchange_rate")
            db.insert(std::make_pair(key, std::stof(value)));
    }
}
#endif