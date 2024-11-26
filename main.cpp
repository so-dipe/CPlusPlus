#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double PI = 3.14;
double e = 2.79;

void greetingMessage()
{
    string name;
    cout << "Hello There! \nWhat's your name? \a";
    cin >> name;
    cout << "Welcome, " << name << "! Hope you have a great time here \n";
}

void loopOverChars()
{
    for (int i = 32; i < 128; i++)
    {
        cout << (char) i;
    }
    cout << "" << endl;
}

double areaOfCircle(double radius)
{
    return PI * pow(radius, 2);
}

double perimeterOfCircle(double radius)
{
    return 2 * PI * radius;
}

void calculateCircle()
{
    string name;
    double radius;
    cout << "What is the name of your circle? ";
    cin >> name;
    cout << "What is " << name << "'s radius? ";
    cin >> radius;
    cout << "Taking PI as " << PI << endl;
    cout << "Perimeter: " << perimeterOfCircle(radius) << endl;
    cout << "Area: " << areaOfCircle(radius) << "\n";
}

int main() 
{
    greetingMessage();
    calculateCircle();
    // loopOverChars();
    return 0;
}