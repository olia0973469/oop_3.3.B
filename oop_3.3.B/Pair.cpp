//////////////////////////////////////////////////////////////////////////////
// Pair.cpp
#include "Pair.h"

bool operator==(const Pair& p1, const Pair& p2) {
    return (p1.first == p2.first && p1.second == p2.second);
}

bool operator>=(const Pair& p1, const Pair& p2) {
    return ((p1.first > p2.first) || (p1.second > p2.second) || (p1.first == p2.first && p1.second == p2.second));
}

bool operator<=(const Pair& p1, const Pair& p2) {
    return ((p1.first < p2.first) || (p1.second < p2.second) || (p1.first == p2.first && p1.second == p2.second));
}

bool operator>(const Pair& p1, const Pair& p2) {
    return ((p1.first > p2.first) || (p1.second > p2.second));
}

bool operator<(const Pair& p1, const Pair& p2) {
    return ((p1.first < p2.first) || (p1.second < p2.second));
}

bool operator!=(const Pair& p1, const Pair& p2) {
    return (p1.first != p2.first || p1.second != p2.second);
}

Pair::operator string () const
{
    stringstream ss;
    ss << "First:" << first << " ";
    ss << "Second:" << second;

    return ss.str();
}

istream& operator >> (istream& in, Pair& r) {
    std::cout << "Enter the pair:\n";
    std::cout << "First = "; in >> r.first;
    std::cout << "Second = "; in >> r.second;
    cout << endl;
    return in;
}

ostream& operator << (ostream& out, const Pair& r)
{
    out << string(r);
    return out;
}