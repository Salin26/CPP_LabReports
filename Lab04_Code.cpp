#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Book {
public:
    string title;
    string author;
    double price;
    bool available;

    void input() {
        cout << "Title: ";
        getline(cin, title);
        if (title.empty()) getline(cin, title); // handle leftover newline
        cout << "Author: ";
        getline(cin, author);
        cout << "Price: ";
        cin >> price;
        cout << "Available? (1 = yes, 0 = no): ";
        int av; cin >> av;
        available = (av == 1);
        cin.ignore(); // clear newline
    }

    void display() const {
        cout << left << setw(25) << title
             << left << setw(20) << author
             << left << setw(10) << fixed << setprecision(2) << price
             << (available ? "In stock" : "Out of stock") << "\n";
    }
};

int main() {
    int n;
    cout << "How many books? ";
    cin >> n;
    cin.ignore(); // clear newline

    vector<Book> books;
    books.reserve(n);
    for (int i = 0; i < n; ++i) {
        cout << "\n--- Book " << (i + 1) << " ---\n";
        Book b;
        b.input();
        books.push_back(b);
    }

    cout << "\nAvailable Books:\n";
    cout << left << setw(25) << "Title"
         << left << setw(20) << "Author"
         << left << setw(10) << "Price"
         << "Status\n";
    cout << string(70, '-') << "\n";
    for (const auto& b : books) {
        if (b.available) b.display();
    }
    return 0;
}