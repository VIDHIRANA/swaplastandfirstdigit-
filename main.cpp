/*Write a program (without using inbuilt functions and not using Strings or array) to swap first and last digits of any number*/

int swapFirstLastDigits( int num){
    int  firstDigit, lastDigit, digits, swappedNum;
    //Find last digit of a number
    lastDigit = num % 10;
    //Find total number of digits - 1
    digits    = (int)log10(num);
    //Find first digit
    firstDigit = (int) (num / pow(10, digits));
    swappedNum  = lastDigit;
    swappedNum *= (int) round(pow(10, digits));
    swappedNum += num % ((int)round(pow(10, digits)));
    swappedNum -= lastDigit;
    swappedNum += firstDigit;
    cout<<"Number after swapping first and last digit:"<< swappedNum;
    return 0;
    
}

int main()
{
    
    swapFirstLastDigits(1277730);
}