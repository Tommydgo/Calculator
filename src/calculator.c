#include "global_includes.h"

static long long int compute(long long int nb_1, char operator, long long int nb_2)
{
    switch (operator) {
        case '+':
            return nb_1 + nb_2;
        case '-':
            return nb_1 - nb_2;
        case '*':
            return nb_1 * nb_2;
        case '/':
            return nb_1 / nb_2;
        case '%':
            return nb_1 % nb_2;
    }
    return nb_1;
}

long long int calculator(int argc, char **argv)
{
    long long int total = atoll(argv[1]);
    char operator = ' ';
    long long int nb_2 = 0;

    for (int i = 2; i + 1 < argc; i += 2) {
        operator = argv[i][0];
        nb_2 = atoll(argv[i + 1]);
        total = compute(total, operator, nb_2);
    }
    return total;
}
