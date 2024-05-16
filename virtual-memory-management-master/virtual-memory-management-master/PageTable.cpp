

#include "PageTable.h"
#include "Constants.h"
#include "VirtualMemoryManager.h"
#include <cstdlib>

using namespace std;

PageTable::PageTable() 
{
    for(int i = 0; i < pageTableSize; i++)
    {
        table.push_back(rand()%ramSize);   // init Pageframes
        presentBit.push_back(0);
        dirtyBit.push_back(0);
        rBit.push_back(0);
    }
}

PageTable::~PageTable() 
{
    
}

int PageTable::getPageFrame(int pageNumber) //retrieves the assigned frame number for a specific page.
{
    int pageFrame = table[pageNumber];
    return pageFrame;
}

void PageTable::setPresentBit(int index)
{
    presentBit[index] = 1; //  Indicates if the page is currently loaded in memory (1) or not (0).
}

int PageTable::getPresentBit(int index)
{
    return presentBit[index];
}

void PageTable::removePresentBit(int index)
{
    presentBit[index] = 0;
}

void PageTable::setReferenceBit(int index)
{
    rBit[index] = 1; // Likely a reference bit, set to 1 when the page is accessed.
}

void PageTable::removeReferenceBit(int index)
{
    rBit[index] = 0;
}

void PageTable::setDirtyBit(int index)
{
    dirtyBit[index] = 1;  //Indicates if the page content has been modified since loading (1) or not (0).
}

void PageTable::removeDirtyBit(int index)
{
    dirtyBit[index] = 0;
}