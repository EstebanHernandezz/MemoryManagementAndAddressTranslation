#include "PageManagement.h"

// implement extractPageNumberAndOffset here
std::pair<unsigned int, unsigned int> PageManagement::extractPageNumberAndOffset(unsigned int logicalAddress) {
    // calculate the page number from logical address, keep only the last 8 bits
    unsigned int pageNumber = (logicalAddress >> 8) & 0xFF;
    // calculate the offset -> ...keep LOWER 8 bits NOT upper
    unsigned int offset = logicalAddress & 0xFF;

    return { pageNumber, offset };
}
