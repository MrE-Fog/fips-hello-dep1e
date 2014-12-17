#include <stdio.h>
#include "dep2/dep2.h"

void print_dep1() {
    printf("Hello from dep1\n");
    print_dep2();
}

