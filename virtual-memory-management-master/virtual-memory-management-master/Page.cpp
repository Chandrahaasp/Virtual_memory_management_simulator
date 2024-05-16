

#include "Page.h"
#include "Constants.h"
#include <vector>
#include <cstdlib>

using namespace std;

Page::Page() // default constructor
{

}

Page::Page(int value, int pageNumber)  //Initializes the page with a specific value and page number
{
    this->pageNumber = pageNumber;
    this->value = value;
    this->pageFrame = -1; // sets pageFrame to -1
    
    for(int i = 0; i < offsetLength; i++)
    {
        offset.push_back(i); // populates the offset vector with values from 0 to offsetLength-1.
    }
}

Page::~Page()  // destructor
{
    
}

int Page::getPageNumber()
{
    return this->pageNumber;
}

void Page::setPageNumber(int pageNumber)
{
    this->pageNumber = pageNumber;
}

void Page::setPageFrame(int pageFrame)
{
    this->pageFrame = pageFrame;
}

int Page::getPageFrame()
{
    return this->pageFrame;
}

void Page::setValue(int value) {
        this->value = value;
    }

int Page::getValue() const {
        return value;
    }