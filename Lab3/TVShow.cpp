#include "TVShow.h"

using namespace std;

TVShow::TVShow()
{
}

TVShow::TVShow(std::string string1, std::string string2) : Show(string1, string2)
{
}

void TVShow::play()
{
	cout << "What season and episode are you looking for? ";
	int szn;
	int ep;
	try
	{
		cin >> szn >> ep;
		cout << "The name of the episode is: " << this->showDetails[szn][ep] << endl;
	}
	catch (const std::out_of_range&)
	{
		cout << "The season or episode you entered does not exist." << endl;
	}
}

void TVShow::details()
{
	std::cout << "Title: " << this->getTitle() << "\nDescription: " << this->getDescription() 
		<< "Seasons: " << sizeof(this->showDetails) / sizeof(std::string) / 10 << std::endl;
}
