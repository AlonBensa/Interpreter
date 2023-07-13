#include "Exception.h"

Exception::Exception(int index, std::vector<std::string> values)
{
    this->_index = index;
    this->_values = values;
}

const char* Exception::what()
{
    std::vector<std::string> allExceptions = GetTextFile();
    if (this->_values.empty()) {
        return allExceptions[this->_index].c_str();
    }
    return AddParmeters(allExceptions[this->_index]).c_str();
}

std::string Exception::AddParmeters(std::string line)
{
    int indexValues = 0;
    std::string message = "";
    for (int i = 0; i < line.length(); i++) {
        if (line[i] == '{') {
            message += this->_values[indexValues];
            indexValues += 1;
            i += 1;
        }
        else 
        {
            message += line[i];
        }
    }
    return message;
}

std::vector<std::string> Exception::GetTextFile()
{
    std::vector<std::string> vecOfStrs;
    std::ifstream in("ExceptionsMessage.txt");
    std::string str;
    while (std::getline(in, str))
    {
        if (str.size() > 0)
            vecOfStrs.push_back(str);
    }
    return vecOfStrs;
}
