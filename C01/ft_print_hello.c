
#include <unistd.h>

void ft_print_hello(void) {
    char *ptr = "Hello, World!\n";
    write(1, ptr, 14);
}
