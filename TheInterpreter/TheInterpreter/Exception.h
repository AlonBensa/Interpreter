#pragma once
#include <string>
#include <vector>
#include <fstream>

class Exception
{
public:
	Exception(int index, std::vector<std::string> values);
	const char* what();
	std::string AddParmeters(std::string line);
	std::vector<std::string> GetTextFile();
private:
	int _index;
	std::vector<std::string> _values;
};

