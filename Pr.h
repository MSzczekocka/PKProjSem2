#ifndef PKMSZCZEKOCKA_PR_H
#define PKMSZCZEKOCKA_PR_H


class Pr : public Liczba {
private:
    double Cp;
    double n;
    double h;

public:
    Pr(double Cp, double n, double h): Cp(Cp), n(n), h(h) {}

    double getCp() const { return Cp; }
    void setCp(double cp) { Cp = cp; }

    double getN() const { return n; }
    void setN(double n) { Pr::n = n; }

    double getH() const { return h; }
    void setH(double h) { Pr::h = h; }

    double wartosc() override {
        return Cp * n / h;
    }


};


#endif //PKMSZCZEKOCKA_PR_H
