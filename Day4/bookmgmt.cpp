#include <iostream>
using namespace std;

class Book {
    int bookId;
    string title, author;
    float price;

public:
    void input() {
        cout << "Enter Book ID: ";
        cin >> bookId;
        cin.ignore();
        cout << "Enter Title: ";
        getline(cin, title);
        cout << "Enter Author: ";
        getline(cin, author);
        cout << "Enter Price: ";
        cin >> price;
    }

    void display() {
        cout << "\nBook ID: " << bookId;
        cout << "\nTitle: " << title;
        cout << "\nAuthor: " << author;
        cout << "\nPrice: " << price << endl;
    }
};

int main() {
    Book books[4];
    for (int i = 0; i < 4; i++) {
        cout << "\nEnter details of Book " << i + 1 << ":\n";
        books[i].input();
    }

    cout << "\n--- Book Details ---\n";
    for (int i = 0; i < 4; i++) {
        books[i].display();
    }
    return 0;
}