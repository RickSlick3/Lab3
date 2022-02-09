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
	cout << "What season and episode are you looking for? Press 'enter' after every entry";
	int szn;
	int ep;
	try
	{
		cin >> szn >> ep;
		//cout << "The name of the episode is: " << this->showDetails[szn][ep] << endl;
		cout << "Episode " << szn * 10 + ep << endl;
	}
	catch (const std::out_of_range&)
	{
		cout << "The season or episode you entered does not exist." << endl;
	}
}

void TVShow::details()
{
	std::cout << "Title: " << this->getTitle() << "\nDescription: " << this->getDescription() << endl;
		//<< "\nSeasons: " << sizeof(this->showDetails) / sizeof(std::string) / 10 << std::endl;
}
