#include "ElementPair.h"
#include <iostream>

using namespace std;

ElementPair::ElementPair(long integerNumber, long primeFactor1, long primeFactor2):
    m_integerNumber(integerNumber),
    m_primeFactor1(primeFactor1),
    m_primeFactor2(primeFactor2)
{
    for (long idx = 0; idx < integerNumber; ++idx)
    {
        Remainders remainders(idx % m_primeFactor1, idx % m_primeFactor2);
        m_elementPairs.insert(std::make_pair(idx, remainders));
        cout << idx <<
            " = {" << idx << " mod " << m_primeFactor1 << ", " << idx << " mod " << m_primeFactor2 << "} = {"
            << remainders.m_remainders1 << ", " << remainders.m_remainders2 << "}" << endl;
    }
}

void ElementPair::Add(const long &lv, const long &rv)
{
    long lvRemainders1 = m_elementPairs.find(lv)->second.m_remainders1;
    long lvRemainders2 = m_elementPairs.find(lv)->second.m_remainders2;

    long rvRemainders1 = m_elementPairs.find(rv)->second.m_remainders1;
    long rvRemainders2 = m_elementPairs.find(rv)->second.m_remainders2;

    long remainders1 = (lvRemainders1 + rvRemainders1) % m_primeFactor1;
    long remainders2 = (lvRemainders2 + rvRemainders2) % m_primeFactor2;

    cout<< lv <<" + "<< rv << " => {(" << lvRemainders1 << " + "<< rvRemainders1 << ") mod "<< m_primeFactor1 
        <<", (" << lvRemainders2 << " + " << rvRemainders2 << ") mod " << m_primeFactor2 << "} = "<< "{" << remainders1 
        << ", " << remainders2 << "}" <<endl;
}

void ElementPair::Substract(const long& lv, const long& rv)
{
    long lvRemainders1 = m_elementPairs.find(lv)->second.m_remainders1;
    long lvRemainders2 = m_elementPairs.find(lv)->second.m_remainders2;

    long rvRemainders1 = m_elementPairs.find(rv)->second.m_remainders1;
    long rvRemainders2 = m_elementPairs.find(rv)->second.m_remainders2;

    long remainders1 = (m_primeFactor1 + lvRemainders1 - rvRemainders1) % m_primeFactor1;
    long remainders2 = (m_primeFactor2 + lvRemainders2 - rvRemainders2) % m_primeFactor2;

    cout << lv << " - " << rv << " => {(" << lvRemainders1 << " - " << rvRemainders1 << ") mod " 
        << m_primeFactor1 << ", (" << lvRemainders2 << " - " << rvRemainders2 << ") mod " 
        << m_primeFactor2 << "} = " << "{" << remainders1 << ", " << remainders2 << "}" << endl;
}

void ElementPair::Multiply(const long& lv, const long& rv)
{
    long lvRemainders1 = m_elementPairs.find(lv)->second.m_remainders1;
    long lvRemainders2 = m_elementPairs.find(lv)->second.m_remainders2;

    long rvRemainders1 = m_elementPairs.find(rv)->second.m_remainders1;
    long rvRemainders2 = m_elementPairs.find(rv)->second.m_remainders2;

    long remainders1 = (lvRemainders1 * rvRemainders1) % m_primeFactor1;
    long remainders2 = (lvRemainders2 * rvRemainders2) % m_primeFactor2;

    cout << lv << " * " << rv << " => {(" << lvRemainders1 << " * " << rvRemainders1 << ") mod " 
        << m_primeFactor1 << ", (" << lvRemainders2 << " * " << rvRemainders2 << ") mod " 
        << m_primeFactor2 << "} = " << "{" << remainders1 << ", " << remainders2 << "}" << endl;
}

bool ElementPair::IsPrime(long prime)
{
    if (prime < 2)
        return false;

    for (int idx = 2; idx <= prime / idx; ++idx)
    {
        if (prime % idx == 0)
        {
            return false;
        }
    }

    return true;
}

ElementPair::~ElementPair()
{
}

