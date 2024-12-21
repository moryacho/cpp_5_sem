#include <iostream>
#include <vector>
#include <fstream>
#include <memory>
#include <string>

using namespace std;

class Human_being {
public:
    virtual void input() = 0;
    virtual void display() const = 0;
    virtual string saveData() const = 0;
    virtual ~Human_being() {}
};

class Scooler : public Human_being {
private:
    string name;
    string phone;
    string major;

public:
    void input() override {
        cout << "Введите ФИО школьника: ";
        getline(cin, name);
        cout << "Введите телефон школьника: ";
        getline(cin, phone);
        cout << "Введите класс школьника: ";
        getline(cin, major);
    }

    void display() const override {
        cout << "Школьник: " << name << ", Телефон: " << phone << ", класс: " << major << endl;
    }

    string saveData() const override {
        return "Школьник: " + name + ", Телефон: " + phone + ", класс: " + major;
    }
};

class Teacher : public Human_being {
private:
    string name;
    string phone;
    string subject;

public:
    void input() override {
        cout << "Введите ФИО учителя: ";
        getline(cin, name);
        cout << "Введите телефон учителя: ";
        getline(cin, phone);
        cout << "Введите предмет учителя: ";
        getline(cin, subject);
    }

    void display() const override {
        cout << "Учитель: " << name << ", Телефон: " << phone << ", Предмет: " << subject << endl;
    }

    string saveData() const override {
        return "Учитель: " + name + ", Телефон: " + phone + ", Предмет: " + subject;
    }
};

class Colleague : public Human_being {
private:
    string name;
    string phone;
    string jobTitle;

public:
    void input() override {
        cout << "Введите ФИО коллеги: ";
        getline(cin, name);
        cout << "Введите телефон коллеги: ";
        getline(cin, phone);
        cout << "Введите должность коллеги: ";
        getline(cin, jobTitle);
    }

    void display() const override {
        cout << "Коллега: " << name << ", Телефон: " << phone << ", Должность: " << jobTitle << endl;
    }

    string saveData() const override {
        return "Коллега: " + name + ", Телефон: " + phone + ", Должность: " + jobTitle;
    }
};

class AddressBook {
private:
    vector<unique_ptr<Human_being>> contacts;

public:
    void addContact(unique_ptr<Human_being> person) {
        contacts.push_back(move(person));
    }

    void displayContacts() const {
        for (const auto& person : contacts) {
            person->display();
        }
    }

    void saveToFile(const string& filename) const {
        ofstream outFile(filename);
        for (const auto& person : contacts) {
            outFile << person->saveData() << endl;
        }
        outFile.close();
    }
};

class Interface {
private:
    AddressBook addressBook;

public:
    void run() {
        int choice;
        do {
            cout << "1. Добавить контакт\n2. Показать контакты\n3. Сохранить в файл\n0. Выход\nВыберите действие: ";
            cin >> choice;
            cin.ignore();

            switch (choice) {
            case 1: {
                int type;
                cout << "Выберите тип: 1. Школьник 2. Учитель 3. Коллега: ";
                cin >> type;
                cin.ignore();

                unique_ptr<Human_being> person;
                if (type == 1) {
                    person = make_unique<Scooler>();
                }
                else if (type == 2) {
                    person = make_unique<Teacher>();
                }
                else if (type == 3) {
                    person = make_unique<Colleague>();
                }

                if (person) {
                    person->input();
                    addressBook.addContact(move(person));
                }
                break;
            }
            case 2:
                addressBook.displayContacts();
                break;
            case 3: {
                string filename;
                cout << "Введите имя файла для сохранения: ";
                getline(cin, filename);
                addressBook.saveToFile(filename);
                break;
            }
            case 0:
                cout << "Выход из программы." << endl;
                break;
            default:
                cout << "Неверный выбор! Попробуйте снова." << endl;
            }
        } while (choice != 0);
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    Interface interface;
    interface.run();
    return 0;
}
