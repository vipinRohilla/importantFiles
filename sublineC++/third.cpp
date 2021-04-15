#include <iostream>
#include <cmath>
#include <string>
using std::cout;
using std::cin;
using std::string;

int main()
{
    // auto x = 5U;
    // cout << x << std::endl;

    //hexadecial and octal

    // int number = 30;
    // cout << number << std::endl;

    //hex and oct into decimal
    // int hexnumber = 0x30;       //hexdecimal number representation
    // cout << hexnumber << std::endl;

    int octalNumber = 030;
    // cout << octalNumber << std::endl;       //octal number representation

    //decimal into hex or oct
    int decimalNumber = 30;
    // cout << std::hex << decimalNumber << std::endl ;
    // cout << std::oct << decimalNumber << std::endl ;
    int firstNumber = 10;
    int secondNumber = 5;
    if(firstNumber > secondNumber)
    {
      cout << firstNumber << " is greater than " << secondNumber << std::endl;
    }
    else
    {
      cout << secondNumber << " is greater than " << firstNumber << std::endl;
    }

    enum season{summer, spring, fall, winter};
    season now = winter ;

    switch (now) {
      case summer:
        cout << "this is summer";
              break;
      case spring:
        cout << "this is spring";
        break;
      case fall:
        cout << "this is fall";
        break;
      case winter:
        cout << "this is winter\n";
        break;

    }

    switch (firstNumber) {
      case 10:
            cout << "number is 10" << std::endl;
            break;
      case 12:
            cout << "number is not 10";
            break;
      default:
            cout << "not correct";
            break;
    }

    int i = 0;
    while(i < 20)
    {
      cout << std::dec << i++ ;
      // i = i + 1 ;
    }
    cout << std::endl;

    for(int j = 0; j < 10; j++)
    {
      cout << j << std::endl;

    }

    int fact = 5;
    int factorial = 1;
    // for(int i = 1; i <= fact; i++)
    // {
    //   factorial = factorial * i;
    // }
    // cout << std::dec << factorial << std::endl;

    // i = 1;
    // while(i <= fact)
    // {
    //   factorial = factorial * i ;
    //
    //   i = i+1;
    //
    // }
    // cout << std::dec << factorial;
    //
    // string password = "hellotacos123";
    // string guess;
    //
    // do{
    //   cout << "Guess the password";
    //   cin >> guess;
    //
    // }while(guess != password);


    string sentence = "hello my name is caleb";

    for(int i = 0; i < sentence.size(); i++)
    {
      cout << sentence[i] << std::endl;
      if(sentence[i]=='o'){
        cout << "found o" << std::endl;
        break;
      }
    }
    int a = 3;
    int b = 2;
    a > b ? cout << "yes" : cout << "no";    //trinary operator
    // cout << point << '\n';












    return 0;
    }
