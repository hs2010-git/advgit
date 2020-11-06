#include <stdio.h>

char *messages[] = {"Hello uncertain worl!\n"};

char *get_message(int number) {
    return message[number];
}

int main(int argc, char *argv[]) {
    if (argc > 1) {
        printf(get_message(atoi(argv[1])));
    } else {
        printf(get_message(0));
    }
    return 0;
}
