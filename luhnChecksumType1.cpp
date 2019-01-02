/*
 Created by naresh on 9/24/2018.
 title: Luhn Checksum Validation
 Reference: Think Like a Programmer by V. Anton Spraul

 To learn about the Luhn Checksum algorithm refer https://en.wikipedia.org/wiki/Luhn_algorithm
*/

#include<iostream>

using namespace std;

int sumDoubleDigit(int digit) {
    //doubles the received digit
    //if the doubled values is a single digit number (0-9), then returns it
    //if its a double digit number (10-18), returns the sum of the digits


    int doubleDigit = digit * 2;
    int sum;

        if (doubleDigit > 9) //checks if the doubled value is a 2 digit number
            sum = (doubleDigit % 10) + (doubleDigit / 10);
        else
            sum = doubleDigit;

    return sum;

}// End sumDoubleDigit(int digit)

void getLuhnCheckSum() {
    //calculates the Luhn checksum of a number
    //https://en.wikipedia.org/wiki/Luhn_algorithm

    char digit;
    int oddCheckSum = 0, evenCheckSum = 0, position = 1;

        cout << "Enter a number: ";
        digit = cin.get();

        while (digit != 10) { //The ascii value 10 here corresponds to 'enter' button being pressed
            if (position % 2 == 0) {
                oddCheckSum += sumDoubleDigit(digit - '0');
                evenCheckSum += digit - '0';
            } //End if

            else {
                evenCheckSum += sumDoubleDigit(digit - '0');
                oddCheckSum += digit - '0';
            }//End else

            digit = cin.get();
            position++;
        }//End while(digit != 0)

    int checkSum = 0;

        if ((position - 1) % 2 == 0)
            checkSum = evenCheckSum;
        else
            checkSum = oddCheckSum;

        cout << "Checksum is " << checkSum << ".\n";

        if (checkSum % 10 == 0)
            cout << "Checksum is valid.\n";
        else
            cout << "Checksum is invalid.\n";

}//End getLuhnCheckSum()


int main() {

        getLuhnCheckSum();

    return 0;
}//End main()

