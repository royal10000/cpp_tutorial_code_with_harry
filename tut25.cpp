#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Define a simple Message structure
struct Message {
    string sender;
    string recipient;
    string content;
};

// Define a class for handling SMS functionality
class SMSService {
private:
    vector<Message> inbox;

public:
    // Method to send a message
    void sendMessage(string sender, string recipient, string content) {
        Message msg = {sender, recipient, content};
        inbox.push_back(msg);
        cout << "Message sent successfully!" << endl;
    }

    // Method to check inbox for new messages
    void checkInbox(string recipient) {
        cout << "Checking inbox for messages..." << endl;
        bool found = false;
        for (const auto& msg : inbox) {
            if (msg.recipient == recipient) {
                cout << "New message from " << msg.sender << ": " << msg.content << endl;
                found = true;
            }
        }
        if (!found) {
            cout << "No new messages." << endl;
        }
    }
};

int main() {
    SMSService sms;

    // Send a message
    sms.sendMessage("Alice", "Bob", "Hello, Bob! How are you?");

    // Check inbox for messages
    sms.checkInbox("Bob");

    return 0;
}
