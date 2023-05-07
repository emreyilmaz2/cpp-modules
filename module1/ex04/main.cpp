#include "iostream"
#include "fstream"
#include "sstream"

int main(int argc, char *argv[])
{
    std::ifstream infile;
    std::ofstream outfile;
    std::string str;
    if(argc != 4)
    {
        std::cout<<"arguman count error"<<std::endl;
        exit(1);
    }
    std::string input_file_name = argv[1];
    std::string res = input_file_name + ".replace";
    std::string search = argv[2];
    std::string replace = argv[3];

    infile.open(argv[1]);
    outfile.open(res);
    if(infile.fail() || outfile.fail())
    {
        std::cout<<"file error"<<std::endl;
        exit(1);
    }

    while (std::getline(infile, str)) {
        std::istringstream iss(str); // Bu döngü, iss değişkeninin içindeki her bir kelimeyi sırayla word değişkenine atayarak döngüyü ilerletir. 
        //Burada >> işlemi "stream extraction operator" olarak bilinir ve akıştan bir sonraki kelimeyi alır ve word değişkenine atar. 
        //Bu işlem, iss nesnesinin sonuna kadar devam eder ve daha fazla kelime kalmayana kadar word değişkenine atamalar devam eder.
        // Bu işlem, std::istringstream nesnesini kullanarak bir std::string içindeki kelimeleri ayıklamak için yaygın olarak kullanılır.
        std::string word;
        std::string new_line = "";
        while (iss >> word) 
            (word==search)?new_line += replace + " ":new_line += word + " ";
        new_line = new_line.substr(0, new_line.length() - 1);
        outfile << new_line << std::endl;
    }

    infile.close();
    outfile.close();
}