#include "global_includes.h"

int main(int argc, char **argv) {
    long long int total = 0;

    if (check_args(argc, argv) == EXIT_FAIL)
        return EXIT_FAIL;
    total = calculator(argv);
    if (printf("%lld\n", total) < 0)
        return EXIT_FAIL;
    return SUCCESS;
}
