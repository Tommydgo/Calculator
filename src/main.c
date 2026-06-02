#include "global_includes.h"

int main(int argc, char **argv) {
    long long int total = 0;

    total = calculator(argc, argv);
    if (printf("%lld\n", total) < 0)
        return EXIT_FAIL;
    return SUCCESS;
}
