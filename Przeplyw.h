#ifndef PKMSZCZEKOCKA_PRZEPLYW_H
#define PKMSZCZEKOCKA_PRZEPLYW_H
#include "cmath"


class Przeplyw {
public:

    static double liczA(Re re, Pr pr, double l) {
        Nu nu = re.wartosc() < 6050 ? PrzeplywBurzliwy.liczNu(re, pr, l) : PrzeplywLaminarny.liczNu(re, pr, l);
        return nu.getWartosc() * nu.getH() / nu.getD();
    }
};

class PrzeplywBurzliwy :public Przeplyw{
public:
    static Nu liczNu(Re re, Pr pr, double l) {
        double wNu = 0.33 * pow(re.wartosc(), 0.6) * pow(pr.wartosc(), 0.25);
        Nu nu = Nu(wNu);
        nu.setD(re.getD());
        nu.setH(pr.getH());
        return nu;
    }

};

class PrzeplywLaminarny : public Przeplyw{

public:
    static Nu liczNu(Re re, Pr pr, double l) {
        double nuW = 0;
        if (wspPomocniczy(re, pr, l) > 10) {
            nuW = 1.86 * pow(re.getN(),0.14) * pow(re.wartosc(), 0.3333) * pow(pr.wartosc(), 0.3333) + pow((re.getD() / l), 0.3333);
        } else {
            nuW = 0.5 * re.wartosc() * pr.wartosc() * re.getD() * l;
        }
        Nu nu = Nu(nuW);
        nu.setH(pr.getH());
        nu.setD(re.getD());
        return nu;
    }

private:
    static double wspPomocniczy(Re re, Pr pr, double l) {
        return pr.wartosc() * re.wartosc() * (re.getD() / l);
    }
};

#endif //PKMSZCZEKOCKA_PRZEPLYW_H
