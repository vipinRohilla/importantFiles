 #include <iostream>
 #include <cmath>
 #include <string>
 using std::string;
 using std::cout;
 using std::cin;
 #define X 5        //to define a constant
 int main()
 {
     const int x = 5 ;  //to define a constant 
     enum { y = 100 };  //to define a constant by enum
    //  cout << x << X << y ;
     string greeting = "hello" ; 
     string greetings = "world" ;
     string completeGreetings = greeting + " " +greetings ;
     cout << completeGreetings << completeGreetings.length() << std::endl;
     string name;
    //  cin >> name;       // it will take only 1 word before space
     cout << name;

     string fullName;
    //  getline(cin, fullName); // it will take full string or array of characters
     cout << fullName;

     string a = "what is hello";
     cout << a.find("is") << std::endl;
     cout << a.length() << std::endl;
     cout << a.find_first_of("aieou") << std::endl;
     cout << a.replace(9,4,"eaven") << std::endl;
    //  cout <<  a.compare("what is hell0");
    cout << a.find_first_of("!") << std::endl;

    unsigned long q = -1;
    cout << q  << std::endl;






     return 0;
 }