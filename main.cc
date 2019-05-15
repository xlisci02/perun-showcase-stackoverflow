// regex_match example
#include <iostream>
#include <string>
#include <regex>
#include <iostream>
#include <fstream>
#include <algorithm>

int main(int argc, char ** argv)
{
    std::ifstream file;
	file.open (argv[1]);
	if (!file.is_open()) return 0;

 
	std::string line;
	while(getline( file, line )){
//    	std::regex r("\\s+$"); 
    	std::regex r("^[\\s\\u200c]+|[\\s\\u200c]+$"); 
    	std::smatch m;
    	std::regex_search(line, m, r);
    	for(auto v: m) std::cout << "# " << v << "|" << std::endl;
    }
    
}
