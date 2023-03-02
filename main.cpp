#include "lib.h"

int main(int argc, char* argv[]) {
  library n = library();
  n.add_book("hello");
  n.list_books();
  return 0;
}