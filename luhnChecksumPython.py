def sumDouble(digit):
    ''' doubles the input and sums the individual digit if its a 2 digit number'''
    doubleValue = 2 * int(digit)

    if doubleValue > 9:
        return 1 + (doubleValue % 10)

    return doubleValue


def getNumber():
    '''takes the user input and returns it as a list'''
    number = list((input('Enter a number: ')))

    if (len(number) % 2) != 0:
        number.insert(0, '0')

    return number


def checkSum():
    '''calculates the Luhn Checksum'''
    
    checksumValue = 0
    numList = getNumber()
    length = len(numList)

    for i in range(length):
        if i % 2 == 0:
            checksumValue += sumDouble(numList[i])
        else:
            checksumValue += int(numList[i])

    print("Checksum is:", checksumValue)

    if(checksumValue % 10 == 0):
        print("Checksum is valid!")
    else:
        print("Checksum is invalid.")



if __name__ == "__main__":
    checkSum()
    
    



