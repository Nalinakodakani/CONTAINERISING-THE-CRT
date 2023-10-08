#pragma once
#include <vector>
#include <map>

class Remainders
{
public:
    Remainders(long remainders1, long remainders2):m_remainders1(remainders1), m_remainders2(remainders2)
    {
    };
    long m_remainders1;
    long m_remainders2;
};

class ElementPair
{
public:
    ElementPair(long integerNumber, long primeFactor1, long primeFactor2);
    virtual ~ElementPair();

    void Add(const long& lv, const long& rv);
    void Substract(const long& lv, const long& rv);
    void Multiply (const long& lv, const long& rv);

    static bool IsPrime(long prime);

private:
    long m_integerNumber; //semi-primbe number
    long m_primeFactor1; //first factor
    long m_primeFactor2; //second factor

    std::map<long, Remainders> m_elementPairs; //table of residues
};

