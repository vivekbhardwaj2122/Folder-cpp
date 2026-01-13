#include <iostream>
using namespace std;

class Book {
public:
    int bookId = 101;
};

int main() {
    Book b;
    cout << "Book ID = " << b.bookId;
    return 0;
}
