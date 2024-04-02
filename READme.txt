# Programming Assignment 3

## Description
This project translates logical addresses to physical addresses using a page/frame table.
Taking the provided sample logical addresses (in hexadecimal form), the page number and 
corresponding offset are calculated and printed in the given output form. By taking 
the given hexadecimal input and shifting it to the right by 8 bits leaving the only the first 8
bits which is the page number. Similarly, the offset is found through bitwise operations, leaving 
only the lower 8 bits (where the pageNumber is upper) which will be the offset. 

## Installation

Install Microsoft Visual Studio 2022 (if not already installed)

### Prerequisites
- Microsoft Visual Studio 2022

### Installation Steps
(For VS2022)
1. Navigate to the Microsoft.com
2. Navigate to the Microsoft Visual Studio 2022 download link
3. Select the correct download version for your machine
4. Wait for download to finsh then open VS2022
