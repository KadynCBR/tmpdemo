#include "lib.h"

library::library() { books.push_back("empty book!"); }

void library::add_book(string bookname) {}

void library::remove_book(string bookname) {
  int index = -1;
  for (int i = 0; i < books.size(); i++) {
    if (books.at(i) == bookname) {
      books.erase(books.begin() + index);
      break;
    }
  }
}

void library::list_books() {
  for (auto& book : books) {
    cout << book << endl;
  }
}