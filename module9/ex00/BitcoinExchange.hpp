#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>

void howMuchDoTheyWorth(std::map<std::string, double> &db, std::fstream &ifs);
void fillDataBase(std::map<std::string, double> &db);

#endif