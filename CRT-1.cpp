// CRT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <map>
#include <string>
#include "ElementPair.h"

using namespace std;
int main()
{
    cout << "Let's construct the table of residues modulo (p,q) for all integers in Zn." << endl;
    cout << "First, input a positive semi-prime number n: ";
    long semiPrime = 0;
    cin >> semiPrime;

    cout << "Second, input the first prime number p: ";
    long primeFactor1 = 0;
    cin >> primeFactor1;
    while (!ElementPair::IsPrime(primeFactor1))
    {
        cout << primeFactor1 << " is not a prime integer! Please input the first prime factor:";
        cin >> primeFactor1;
    }

    cout << "Then, input the second prime number q: ";
    long primeFactor2 = 0;
    cin >> primeFactor2;
    while (!ElementPair::IsPrime(primeFactor2))
    {
        cout << primeFactor2 << " is not a prime integer! Please input the second prime factor:";
        cin >> primeFactor2;
    }

    //check the semiPrime
    long semiPrimeCheck = (long)primeFactor1 * primeFactor2;
    if (semiPrimeCheck != semiPrime)
    {
        cout << "Wrong input" << endl;
        return 0;
    }

    //comment maximum limit check due to non-support LONG_MAX for compiler GCC
    /*if (semiPrimeCheck > LONG_MAX) 
    {
        cout << semiPrime <<" exceeds the maximum limit!" << endl;
        return 0;
    }*/

    //construct and output the table
    cout << "Here is the table output:" << endl;
    ElementPair elementPairs(semiPrime, primeFactor1, primeFactor2);

    //now start calculation
    //srand((unsigned)time(NULL));
    cout << "Now, let's test arithmetic operations using CRT." << endl;
    while (true)
    {
        cout << "Specify one of three operations: +, -, or *, input 0 to quit" << endl;
        //cout << "Note, program will choose two operands in Zn randomly for each operation" << endl;
        string strArithmetic;
        long lValue; 
        long rValue;

        cout << "Input your operation: ";
        cin >> strArithmetic;
        if (strArithmetic.compare("0") == 0)
        {
            return 0;
        }
        else if (strArithmetic.compare("+") != 0 && strArithmetic.compare("-") !=0 && strArithmetic.compare("*") != 0)
        {
            cin.clear();
            cout << "Invalid input!" << endl;
            continue;
        }
        
        cout << "Input your first operand: ";
        cin >> lValue;
        if (lValue < 0 || lValue >= semiPrime)
        {
            cin.clear();
            cout << "Invalid input!" << endl;
            continue;
        }

        cout << "Input your second operand: ";
        cin >> rValue;
        if (rValue < 0 || rValue >= semiPrime)
        {
            cin.clear();
            cout << "Invalid input!" << endl;
            continue;
        }

        if (strArithmetic.compare("+") == 0)
        {
            //lValue = rand() % semiPrime;
            //rValue = rand() % semiPrime;
            elementPairs.Add(lValue, rValue);
        }
        else if (strArithmetic.compare("-") == 0)
        {
            elementPairs.Substract(lValue, rValue);
        }
        else if (strArithmetic.compare("*") == 0)
        {
            elementPairs.Multiply(lValue, rValue);
        }
    }
}
    

