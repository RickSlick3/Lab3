#include "Show.h"

std::string Show::getTitle()
{
	return this->title;
}

void Show::setTitle(std::string newTitle)
{
	this->title = newTitle;
}

std::string Show::getDescription()
{
	return this->description;
}

void Show::setDescription(std::string newDescription)
{
	this->description = newDescription;
}

Show::Show()
{
	this->title = "";
	this->description = ""; 
}

Show::Show(std::string newTitle, std::string newDescription)
{
	this->title = newTitle;
	this->description = newDescription;
}

void Show::details()
{
	std::cout << "Title: " << this->title << "\nDescription: " << this->description << std::endl;
}

void Show::play() 
{
	return;
}
