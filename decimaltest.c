#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char *endOfValue;
    double dbl;
    _Decimal64 d64;

    if(argc!=2) {
        printf ("Usage: <value>\n");
        return 1;
    }

    dbl = strtod(argv[1], &endOfValue);

    d64 = (_Decimal64)dbl;
    d64 += 42;

    dbl = d64;

    printf("Result %.17g\n", dbl);

    return 0;
}

