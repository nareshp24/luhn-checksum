//
// Created by naresh on 12/12/2018.
// Reference: Think like a programmer by V. Anton Spraul
// Project: Luhn Checksum
// To learn about the algorithm refer https://en.wikipedia.org/wiki/Luhn_algorithm

#include <iostream>
#include <string>

using namespace std;

string getInput(){

    string input;

        cout << "Enter a number: ";
        getline(cin, input);

        //prepend 0 if the length of the input string is odd. This doesn't change the checksum and makes our calculation easier
        if (input.length() % 2 == 1)
            return "0" + input;

    return input;
}//End getInput()

int sumDoubleDigit(short digit){

    short doubleValue = 2 * digit, sum;

        if (doubleValue > 9)
            sum = 1 + (doubleValue % 10);
        else
            sum = doubleValue;

    return sum;
}//End sumDoubleDigit ()

int main(){


    string strInput = getInput(); //get input from the user
    unsigned int checkSum = 0;

        for (unsigned int i = 0; i < strInput.length(); i++)
            if (i % 2 == 0)
                checkSum += sumDoubleDigit(strInput[i] - '0');
            else
                checkSum += strInput[i] - '0';

        cout << "Checksum is: " << checkSum << endl;

        if (checkSum % 10 == 0)
            cout << "Checksum is valid.\n";
        else
            cout << "Checksum is invalid.\n";

    return 0;
}//End main()
