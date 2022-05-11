#ifndef PKMSZCZEKOCKA_NU_H
#define PKMSZCZEKOCKA_NU_H


class Nu {
private:
    double wartosc;
    double a;
    double d;
    double h;

public:
    Nu(double wartosc): wartosc(wartosc){}

    double getWartosc() const { return wartosc; }
    void setWartosc(double wartosc) { Nu::wartosc = wartosc; }

    double getA() const { return a; }
    void setA(double a) { Nu::a = a; }

    double getD() const { return d; }
    void setD(double d) { Nu::d = d; }

    double getH() const { return h; }
    void setH(double h) { Nu::h = h; }

};


#endif //PKMSZCZEKOCKA_NU_H
