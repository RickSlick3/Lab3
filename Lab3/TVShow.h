#pragma once
#include "Show.h"
#include <string> 
#include <iostream>
#include <vector>

class TVShow :
    public Show
{
private:
    std::vector<std::vector<std::string>> showDetails;

public:
    TVShow();
    TVShow(std::string string1, std::string string2);
    void play(); //overridden version is available here
    void details(); //overridden version is available here
};

