//Anand Tagde
//TO-DO List
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Task structure to hold task details
struct Task {
    string description;
    bool completed;
};

// Function to add a new task
void addTask(vector<Task> &tasks, const string &description) {
    Task newTask;
    newTask.description = description;
    newTask.completed = false;
    tasks.push_back(newTask);
    cout << "Task added successfully!" << endl;
}

// Function to view all tasks
void viewTasks(const vector<Task> &tasks) {
    if (tasks.empty()) {
        cout << "No tasks available." << endl;
    } else {
        cout << "Tasks:" << endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << (tasks[i].completed ? "[X]" : "[ ]") << " " << tasks[i].description << endl;
        }
    }
}

// Function to mark a task as completed
void markTaskCompleted(vector<Task> &tasks, int index) {
    if (index >= 0 && index < tasks.size()) {
        tasks[index].completed = true;
        cout << "Task marked as completed!" << endl;
    } else {
        cout << "Invalid task index." << endl;
    }
}

// Function to remove a task
void removeTask(vector<Task> &tasks, int index) {
    if (index >= 0 && index < tasks.size()) {
        tasks.erase(tasks.begin() + index);
        cout << "Task removed successfully!" << endl;
    } else {
        cout << "Invalid task index." << endl;
    }
}

int main() {
    vector<Task> tasks;
    int choice;
    string description;

    cout << "Welcome to the To-Do List Manager!" << endl;

    do {
        cout << "\n1. Add Task\n2. View Tasks\n3. Mark Task as Completed\n4. Remove Task\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter task description: ";
                cin.ignore(); // Ignore the newline character left in the input buffer
                getline(cin, description);
                addTask(tasks, description);
                break;
            case 2:
                viewTasks(tasks);
                break;
            case 3:
                int markIndex;
                cout << "Enter index of task to mark as completed: ";
                cin >> markIndex;
                markTaskCompleted(tasks, markIndex - 1); // Adjust index to 0-based
                break;
            case 4:
                int removeIndex;
                cout << "Enter index of task to remove: ";
                cin >> removeIndex;
                removeTask(tasks, removeIndex - 1); // Adjust index to 0-based
                break;
            case 5:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

    } while (choice != 5);

    return 0;
}

