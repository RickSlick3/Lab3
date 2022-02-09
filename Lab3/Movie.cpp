#include "Movie.h"

Movie::Movie()
{
}

Movie::Movie(std::string newTitle, std::string newDescription, std::string newCredits) : Show(newTitle, newDescription)
{
	this->openingCredits = newCredits;
}

std::string Movie::getCredits()
{
	return this->openingCredits;
}

void Movie::setCredits(std::string newCredits)
{
	this->openingCredits = newCredits;
}

void Movie::play()
{
	std::cout << "Credits: " << this->getCredits() << std::endl;
}
