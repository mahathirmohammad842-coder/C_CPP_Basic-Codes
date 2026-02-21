#include <iostream>

using namespace std;

class Book{
string title;
string author;

int is_checked_out=0;
public:
    Book(string t,string a )
    {
        title = t;
        author = a;
        is_checked_out =0;
    }
void checkout() {
        if (!is_checked_out) {
            is_checked_out = 1;
            cout << "Checked out: " << title << endl;
        } else {
            cout << title << " is already checked out." << endl;
        }
    }
 void return_book() {
        if (is_checked_out) {
            is_checked_out = 0;
            cout << "Returned: " << title << endl;
        } else {
            cout << title << " was not checked out." << endl;
        }
    }
  void display_status() {
        cout << "Title: " << title << ", Author: " << author;
        cout << ", Status: " << (is_checked_out ? "Checked Out" : "Available") << endl;
    }

    string get_title() {
        return title;
    }
};




class Library {
    Book* books[5]; // fixed size for simplicity
    int count;

public:
    Library() {
        count = 0;
    }

    void add_book(Book* b) {
        if (count < 5) {
            books[count] = b;
            count++;
        } else {
            cout << "Library is full!" << endl;
        }
    }

    Book* find_book(string title) {
        for (int i = 0; i < count; i++) {
            if (books[i]->get_title() == title)
                return books[i];
        }
        return NULL;
    }

    void display_all_books() {
        cout << "\n--- Library Book List ---" << endl;
        for (int i = 0; i < count; i++) {
            books[i]->display_status();
        }
    }
};

int main() {
    Library lib;

    // Create 5 books
    Book b1("1984", "George Orwell");
    Book b2("Pride and Prejudice", "Jane Austen");
    Book b3("The Alchemist", "Paulo Coelho");
    Book b4("To Kill a Mockingbird", "Harper Lee");
    Book b5("The Hobbit", "J.R.R. Tolkien");

    // Add books to library
    lib.add_book(&b1);
    lib.add_book(&b2);
    lib.add_book(&b3);
    lib.add_book(&b4);
    lib.add_book(&b5);

    // Checkout 2 books
    Book* book1 = lib.find_book("1984");
    if (book1) book1->checkout();

    Book* book2 = lib.find_book("The Hobbit");
    if (book2) book2->checkout();

    // Return 1 book
    if (book1) book1->return_book();

    // Try to checkout a book that doesn't exist
    Book* missing = lib.find_book("Invisible Man");
    if (missing)
        missing->checkout();
    else
        cout << "Book not found: Invisible Man" << endl;

    // Display all books
    lib.display_all_books();

    return 0;
}

