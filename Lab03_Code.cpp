#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Student {
private:
    string name;
    string id;
    string dept;
public:
    Student() {}
    Student(string n, string i, string d) : name(n), id(i), dept(d) {}
    void input() {
        cout << "Name: ";
        getline(cin, name);
        if (name.empty()) getline(cin, name); // handle leftover newline
        cout << "ID: ";
        getline(cin, id);
        cout << "Department: ";
        getline(cin, dept);
    }
    void display() const {
        cout << left << setw(20) << name
             << left << setw(15) << id
             << left << setw(15) << dept << "\n";
    }
};

int main() {
    int n;
    cout << "How many students? ";
    cin >> n;
    cin.ignore(); // clear newline from buffer

    vector<Student> students;
    students.reserve(n);
    for (int i = 0; i < n; ++i) {
        cout << "\n--- Student " << (i + 1) << " ---\n";
        Student s;
        s.input();
        students.push_back(s);
    }

    cout << "\nStudent List:\n";
    cout << left << setw(20) << "Name"
         << left << setw(15) << "ID"
         << left << setw(15) << "Department" << "\n";
    cout << string(50, '-') << "\n";
    for (const auto& s : students) s.display();
    return 0;
}