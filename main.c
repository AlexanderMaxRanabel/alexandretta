#include "alexandretta.h"
#include <string.h>
#include <unistd.h>
//#include <stdio.h>

void a_print_stdout(const char *str);
size_t a_strlen(const char *str);

int main() {
  const char *str = "Yay this works";
  const char *skibidi = "Setting up my alexandretta rn";
  a_print_stdout(skibidi);
  return 0;
}
