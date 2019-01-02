# Luhn Checksum

Implementation of Luhn checksum validation in C++

To know about what Luhn checksum is refer https://en.wikipedia.org/wiki/Luhn_algorithm

I came across Luhn Checksum in the book "Think like a Programmer" by V. Anton Spraul.
The code "luhnChecksumType1.cpp" uses the method described in the book.
And the code "luhnChecksumType2.cpp" is my modification to it.

The difference between both the implementations being that, Type1 starts calculating the checksum immediately after the first digit is entered by the user (at this point, it is not known whether the final length of the number is odd or even) whereas, the Type2 implementation waits for the user to finish entering the number, finding out whether the length is odd or even (if odd, a zero is prepended and then the checksum is calculated. This doesn't affect the final checksum value) and then proceeding with further procedure. 
