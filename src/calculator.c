#include "global_includes.h"

static int compute(unsigned long long int nb_1, char operator,  unsigned long long int nb_2, long long int total) {

    switch (operator) {
        case '+':
            return total += nb_2;
        case '-':
            return total -= nb_2;
        case '*':
            return total *= nb_2;
        case '/':
            return total /= nb_2;
        case '%':
            return total %= nb_2;
    }
    return total;
}

int calculator(char **argv) {
    unsigned long long int current_nb = 0;
    char current_operator = ' ';
    unsigned long long int next_nb = 0;
    long long int total = 0;

    for (int i = 0; argv[i + 2] != '\0'; i + 3) {
        current_nb = atoll(argv[i]);
        next_nb = atoll(argv[i + 2]);
        current_operator = argv[i];
        total = compute(current_nb, current_operator, next_nb, total);
    }
    return total;
}
