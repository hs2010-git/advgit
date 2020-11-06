#include <stdio.h>

char *message = "Hello uncertain worl!\n";

char *get_message(void) {
    return message;
}

int main() {
    printf(get_message());
    return 0;
}
