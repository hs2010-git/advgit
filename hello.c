#include <stdio.h>

char *messages[] = {"Hello uncertain worl!\n"};

char *get_message(int number) {
    return message[number];
}

int main() {
    printf(get_message(0));
    return 0;
}
