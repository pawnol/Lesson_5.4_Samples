/*
Lesson 5.4 Samples
Pawelski
4/22/2021
Here are the samples for this lesson!
*/

#include <iostream>
#include <string>
using namespace std;

/*
Adds two integers.
*/
int add(int x, int y)
{
    return x + y;
}

/*
Adds two doubles.
*/
double add(double x, double y)
{
    return x + y;
}

/*
Adds an int and a double.
*/
double add(int x, double y)
{
    return x + y;
}

/*
Adds a double and an int.
*/
double add(double x, int y)
{
    return x + y;
}

/*
Displays the passed string to the console. Automatically
goes to the next line unless a second parameter is specified.
*/
void print(string text = "", string end = "\n")
{
    cout << text << end;
}

/*
Displays the passed int to the console. Automatically
goes to the next line unless a second parameter is specified.
*/
void print(int num, string end = "\n")
{
    cout << num << end;
}

/*
Displays the passed double to the console. Automatically
goes to the next line unless a second parameter is specified.
*/
void print(double num, string end = "\n")
{
    cout << num << end;
}

int main()
{
    /*
    Example #1
    In this example, I demonstrate how you can have multiple
    versions of a function as long as the number and/or type
    of parameters is different. This is commonly done to
    allow the function to accept different types of parameters
    or parameters in a different order.
    */
    cout << add(6, 2) << "\n";      // calls add(int x, int y)
    cout << add(6.3, 2.4) << "\n";  // calls add(double x, double y)
    cout << add(6.3, 2) << "\n";    // calls add(int x, double y)
    cout << add(6, 2.4) << "\n\n";  // calls add(double x, int y)

    /*
    Example #2
    */
    print("This is some text to display!");
    print("This is followed by a number... ", "");
    print(3);
    print(5.2);
    print("This combines text and a number... " + to_string(4));
    print();
    return 0;
}