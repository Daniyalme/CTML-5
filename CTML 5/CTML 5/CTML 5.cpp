#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class HTML
{
	string input;
	string filename;
	fstream htmlfile;
public:
	HTML()
	{
		htmlfile.open("html.txt");
		htmlfile << "<!DOCTYPE>\n";
		htmlfile << "<html>\n";
		htmlfile << "<head>\n";
		htmlfile << "</head>\n";
		htmlfile << "<body>\n";
		htmlfile << "</body>\n";
		htmlfile << "</html>\n";
	}
};