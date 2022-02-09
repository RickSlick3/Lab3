#pragma once
#include <string>
#include <iostream>


class Show
{

private:
	std::string title;
	std::string description;

public:
	std::string getTitle(); //available in inherited class
	void setTitle(std::string newTitle); //available in inherited class
	std::string getDescription(); //available in inherited class
	void setDescription(std::string newDescription); //available in inherited class
	Show(); 
	Show(std::string newTitle, std::string newDescription); 
	void details(); //available in inherited class
	virtual void play(); //needs to be overriden
};

