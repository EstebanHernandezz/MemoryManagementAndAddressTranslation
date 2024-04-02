//header file
#ifndef PAGE_MANAGEMENT_H
#define PAGE_MANAGEMENT_H

#include <utility> //std::pair

class PageManagement 
{
public:
    // logical address, use pair for unsigned ints
    static std::pair<unsigned int, unsigned int> extractPageNumberAndOffset(unsigned int logicalAddress);
};

#endif
