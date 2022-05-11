#ifndef PKMSZCZEKOCKA_RE_H
#define PKMSZCZEKOCKA_RE_H
#include "Liczba.h"


class Re : public Liczba {
private:
    double p;
    double w;
    double d;
    double n;

public:
    Re(double p, double w, double d, double n): p(p), w(w), d(d), n(n) {}

    double getP() const { return p; }
    void setP(double p) { Re::p = p; }

    double getW() const { return w; }
    void setW(double w) { Re::w = w; }

    double getD() const { return d; }
    void setD(double d) { Re::d = d; }

    double getN() const { return n; }
    void setN(double n) { Re::n = n; }

    double wartosc() override {
        return p * w * d / n;
    }


};


#endif //PKMSZCZEKOCKA_RE_H
