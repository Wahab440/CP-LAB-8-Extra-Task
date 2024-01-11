#include <iostream>
#include <string>
using namespace std;

void sendMessage(string message) {
    cout << "Sending message: " << message << endl;
}

void receiveMessage(string message) {
    cout << "Received message: " << message << endl;
}

void makeCall(string recipient) {
    cout << "Calling " << recipient << "..." << endl;
    while (true) {
        char input;
        cout << "Does the receiver pick up? (Y/N): ";
        cin >> input;
        if (input == 'Y' || input == 'N') {
            cout << "Call connected to " << recipient << endl;
            break;
        }
        else {
            cout << "Ringing..." << endl;
        }
    }
}

int main() {
    sendMessage("Hello, how are you?");
    receiveMessage("I'm doing well, thank you!");

    makeCall("Friend");

    return 0;
}
