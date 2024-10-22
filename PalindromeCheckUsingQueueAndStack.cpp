#include "QueueLL.hpp"
#include "StackLL.hpp"
#include <string>
#include <iostream>

int main()
{
    string word = "";
    bool error = false;
    cout << "Enter a sentence to check whether palindrome or not? ";
    cin >> word;

    // Create a queue to store the characters from word
    QueueLinkedList queue("Character Queue");

    // Create a stack to store the characters from word
    Stack_LL stack("Character Stack");

    // Enqueue the characters to queue and push the characters to stack
    for (char c : word) {
        queue.enqueue(c);
        stack.push(c);
    }

    // Compare characters from queue and stack
    while (!queue.isEmpty() && !stack.isEmpty()) {
        char queueChar = queue.dequeue();
        char stackChar = stack.pop();
        if (queueChar != stackChar) {
            error = true;
            break;
        }
    }

    // Display the output
    if (error) {
        cout << "The word \"" << word << "\" is not a palindrome." << endl;
    }
    else {
        cout << "The word \"" << word << "\" is a palindrome." << endl;
    }

    return 0;
}
