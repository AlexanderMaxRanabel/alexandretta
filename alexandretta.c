#include <unistd.h>
#include <sys/syscall.h>
#include <sys/types.h>
#include "alexandretta.h"

size_t a_strlen(const char *str) {
    size_t length = 0;

    // Iterate through the string until we reach the null terminator
    while (str[length] != '\0') {

        length++;
    }


    return length;
}

void a_print_stdout(const char *str) {
  size_t len = a_strlen(str);
  syscall(SYS_write, 1, str, len);
}
