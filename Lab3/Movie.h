#pragma once
#include "Show.h"
#include <string>

class Movie :
    public Show
{
private:
    std::string openingCredits;
public:
    Movie();
    Movie(std::string newTitle, std::string newDescription, std::string newCredits);
    std::string getCredits();
    void setCredits(std::string newCredits);
    void play(); //overridden version is available here
    //uses Details function defenition from base class
};

