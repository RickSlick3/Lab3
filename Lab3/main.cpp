#include <iostream>
#include "TVShow.h"
#include "Movie.h"

using namespace std;

int main()
{
	std::string buffer1;
	std::string buffer2;
	std::string buffer3;
	Show show1;
	Movie movie1;
	TVShow TVShow1;
	do
	{
		std::cout << "Press 1 for an instance of Show\nPress 2 for an instance of Movie\nPress 3 for an instance of TV Show\nPress 4 for an instance of a MOVIE declared as a Show\nPress 5 for an instance of a TV Show declared as a Show\n";
		int option;
		std::cin >> option;
		switch (option)
		{
		case 1:
			std::cout << "Enter the title and description of the show: " << endl;
			std::getline(std::cin, buffer1);
			std::getline(std::cin, buffer2);
			show1 = Show(buffer1, buffer2);
			show1.details();
			cout << "Play is not defined for the Show base class" << std::endl;
			break;
		case 2:
			std::cout << "Enter the title and description of the movie, and the opening credits: ";
			std::getline(std::cin, buffer1);
			std::getline(std::cin, buffer2);
			std::getline(std::cin, buffer3);
			movie1 = Movie(buffer1, buffer2, buffer3);
			movie1.details();
			movie1.play();
			break;
		case 3:
			std::cout << "Enter the title and description of the TV show: ";
			std::getline(std::cin, buffer1);
			std::getline(std::cin, buffer2);
			TVShow1 = TVShow(buffer1, buffer2);
			movie1.details();
			movie1.play();
			break;
		case 4:
			std::cout << "Enter the title and description of the movie, and the opening credits: ";
			std::getline(std::cin, buffer1);
			std::getline(std::cin, buffer2);
			std::getline(std::cin, buffer3);
			show1 = Movie(buffer1, buffer2, buffer3);
			show1.details();
			show1.play();
			break;
		case 5:
			std::cout << "Enter the title and description of the TV show: ";
			std::getline(std::cin, buffer1);
			std::getline(std::cin, buffer2);
			show1 = TVShow(buffer1, buffer2);
			show1.details();
			show1.play();
			break;
		default:
			cout << "That option is unavailable\n";
			break;
		}
		cout << "Do you want to continue? [y/n] ";
		cin >> buffer1;
	} while (buffer1 == "y");
}