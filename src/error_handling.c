#include "global_includes.h"

static int isoperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '%');
}

int check_args(int argc, char **argv) {
    for (int i = 0; argv[i] != '\0'; ++i) {
        if (!isdigit(argv[i]) && argv[i] != ' ' && !isoperator(argv[i]))
            return EXIT_FAIL;
    }
    return SUCCESS;
}
