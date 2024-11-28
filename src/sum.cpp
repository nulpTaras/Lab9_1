#include "sum.h"
#include "dod.h"
#include "var.h"
#include <math.h>

using namespace nsDod;
using namespace nsVar;

void nsSum::sum() {
    n = 0;
    a = 1;
    s = a;

    do {
        n++;
        dod(); // обчислення наступного доданка
        s += a;
    } while (fabs(a) > e);
}
