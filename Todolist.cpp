#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

class TodoItem {
public:
    int id;
    std::string value;

    TodoItem(int i, const std::string& v) : id(i), value(v) {}
};

class DeletePredicate {
private:
    int key;

public:
    DeletePredicate(int k) : key(k) {}

    bool operator()(const TodoItem& item) const {
        return item.id == key;
    }
};

class TodoList {
private:
    std::vector<TodoItem> list;

public:
    void addItem(const std::string& userInput) {
        if (!userInput.empty()) {
            list.push_back({static_cast<int>(list.size() + 1), userInput});
        }
    }

    void deleteItem(int key) {
        list.erase(std::remove_if(list.begin(), list.end(), DeletePredicate(key)), list.end());
    }

    void editItem(int index) {
        std::cout << "Edit the todo: ";
        std::string editedTodo;
        std::getline(std::cin >> std::ws, editedTodo);

        if (!editedTodo.empty()) {
            list[index].value = editedTodo;
        }
    }

    void displayList() const {
        for (const auto& item : list) {
            std::cout << std::setw(4) << item.id << " | " << std::setw(20) << std::left << item.value << std::endl;
        }
    }
};

int main() {
    TodoList todoList;
    std::string userInput;

    while (true) {
        std::cout << "Enter todo (or type 'exit' to quit): ";
        std::getline(std::cin >> std::ws, userInput);

        if (userInput == "exit") {
            break;
        } else if (userInput == "list") {
            todoList.displayList();
        } else if (userInput.substr(0, 5) == "delete") {
            int id;
            if (sscanf(userInput.c_str(), "delete %d", &id) == 1) {
                todoList.deleteItem(id);
            } else {
                std::cout << "Invalid input. Please use 'delete <id>' format." << std::endl;
            }
        } else if (userInput.substr(0, 4) == "edit") {
            int id;
            if (sscanf(userInput.c_str(), "edit %d", &id) == 1) {
                todoList.editItem(id - 1);
            } else {
                std::cout << "Invalid input. Please use 'edit <id>' format." << std::endl;
            }
        } else {
            todoList.addItem(userInput);
        }
    }

    return 0;
}
