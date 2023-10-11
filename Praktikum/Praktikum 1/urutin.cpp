#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    stack<int> myStack;
    stack<int> tempStack;
    vector<int> urutinAngka;

    while (true) {
        string input;
        cin >> input;
        if (input == "done") {
            break;
        }

        int number = stoi(input);
        myStack.push(number);
    }

    while (!myStack.empty()) {
        int current = myStack.top();
        myStack.pop();

        while (!tempStack.empty() && tempStack.top() > current) {
            myStack.push(tempStack.top());
            tempStack.pop();
        }

        tempStack.push(current);
    }

    while (!tempStack.empty()) {
        urutinAngka.push_back(tempStack.top());
        tempStack.pop();
    }

    for (int i = urutinAngka.size() - 1; i >= 0; i--) {
        cout << urutinAngka[i] << " ";
    }
    cout << endl;

    return 0;
}
