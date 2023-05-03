#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Book {
  private:
    int book_id;
    string title;
    string author;
    bool is_checked_out;

  public:
    Book(int id, string t, string a) {
        book_id = id;
        title = t;
        author = a;
        is_checked_out = false;
    }

    int get_id() {
        return book_id;
    }

    string get_title() {
        return title;
    }

    string get_author() {
        return author;
    }

    bool get_checked_out() {
        return is_checked_out;
    }

    void check_out() {
        is_checked_out = true;
    }

    void check_in() {
        is_checked_out = false;
    }
};

class Library {
  private:
    vector<Book> books;

  public:
    void add_book(int id, string title, string author) {
        Book new_book(id, title, author);
        books.push_back(new_book);
    }

    Book* find_book(int id) {
        for (int i = 0; i < books.size(); i++) {
            if (books[i].get_id() == id) {
                return &books[i];
            }
        }
        return NULL;
    }

    void check_out_book(int id) {
        Book* book = find_book(id);
        if (book != NULL) {
            if (!book->get_checked_out()) {
                book->check_out();
                cout << "Book checked out successfully." << endl;
            } else {
                cout << "Book is already checked out." << endl;
            }
        } else {
            cout << "Book not found." << endl;
        }
    }

    void check_in_book(int id) {
        Book* book = find_book(id);
        if (book != NULL) {
            if (book->get_checked_out()) {
                book->check_in();
                cout << "Book checked in successfully." << endl;
            } else {
                cout << "Book is already checked in." << endl;
            }
        } else {
            cout << "Book not found." << endl;
        }
    }

    void print_books() {
        cout << "Library Books:" << endl;
        for (int i = 0; i < books.size(); i++) {
            cout << books[i].get_id() << ": " << books[i].get_title() << " by " << books[i].get_author();
            if (books[i].get_checked_out()) {
                cout << " (checked out)" << endl;
            } else {
                cout << " (available)" << endl;
            }
        }
    }
};

int main() {
    Library library;
    library.add_book(1, "To Kill a Mockingbird", "Harper Lee");
    library.add_book(2, "1984", "George Orwell");
    library.add_book(3, "The Great Gatsby", "F. Scott Fitzgerald");

    library.check_out_book(2);

    library.print_books();

    library.check_in_book(2);

    library.print_books();

    return 0;
}

