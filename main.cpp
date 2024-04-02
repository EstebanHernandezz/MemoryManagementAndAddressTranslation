#include <iostream>
#include <vector>
#include "PageManagement.h"

int main() {
    // use sample input hex
    std::vector<unsigned int> logicalAddresses = { 0x3A7F, 0xABCD, 0x5678 };
    // loop through the sample logical addresses
    for (unsigned int address : logicalAddresses) {
        // call extractPageNumberAndOffset -> 
        std::pair<unsigned int, unsigned int> result = PageManagement::extractPageNumberAndOffset(address);
        //store pageNum and offset
        unsigned int pageNumber = result.first;
        unsigned int offset = result.second;
        //sample output form 
        std::cout << "Logical Address: 0x"
            << std::hex << address
            << " => Page Number: 0x"
            << pageNumber
            << ", Offset: 0x"
            << offset
            << std::dec << std::endl;
    }

    return 0;
}
