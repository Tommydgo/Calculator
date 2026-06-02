#include "global_includes.h"

int main(int argc, char **argv) {
    if (check_args(argc, argv) == EXIT_FAIL)
        return EXIT_FAIL;
    return calculator(argv);
}
