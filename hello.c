#include <stdio.h>

char *message = "Hello amazing world!\n";

char *get_message(void) {
    return message;
}

int main(int argc, char *argv[]) {
    (void)argc; (void) argv;
    printf(get_message());
    return 0;
}
