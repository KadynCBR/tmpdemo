#include <iostream>
#include <string>
#include <vector>
using namespace std;

class library {
 public:
  library();
  void add_book(string);
  void remove_book(string);
  void list_books();

 private:
  vector<string> books;
};