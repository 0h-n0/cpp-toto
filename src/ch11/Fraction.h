#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction {
 public:
    Fraction(double number = 0, double denom = 1);
 public:
    double Getnumer() const;
    double GetDenom() const;
 private:
    double m_numer;
    double m_denom;
};
#endif
