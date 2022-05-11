#include <iostream>
#include "Re.h"
#include "Pr.h"
#include "Nu.h"
#include "Przeplyw.h"

int main() {

    Re re1 = Re(1,2,3,4);
    std::cout << re1.wartosc() << std::endl;

    Pr pr1 = Pr(1,6,3);
    std::cout << pr1.wartosc() << std::endl;

    Nu nu1 = Nu(1.55);
    std::cout << nu1.getWartosc() << std::endl;

    std::cout << Przeplyw::liczA(re1, pr1, 0.051) << std::endl;


    return 0;
}
