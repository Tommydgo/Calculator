#include "global_includes.h"

static long long int compute(unsigned long long int nb_1, char operator,  unsigned long long int nb_2, long long int total)
{
    switch (operator) {
        case '+':
            total = nb_1 + nb_2;
            return total;
        case '-':
            total = nb_1 - nb_2;
            return total;
        case '*':
            total = nb_1 * nb_2;
            return total;
        case '/':
            total = nb_1 / nb_2;
            return total;
        case '%':
            total = nb_1 % nb_2;
            return total;
    }
    return total;
}

int calculator(int argc, char **argv)
{
    unsigned long long int nb_1 = 0;
    char operator = ' ';
    unsigned long long int nb_2 = 0;
    long long int total = 0;

    for (int i = 2; i + 1 < argc; i += 2) {
        nb_1 = atoll(argv[i - 1]);
        operator = argv[i][0];
        nb_2 = atoll(argv[i + 1]);
        total += compute(nb_1, operator, nb_2, total);
    }
    return total;
}
