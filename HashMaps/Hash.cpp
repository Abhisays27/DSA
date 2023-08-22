#include <iostream>
#include <unordered_map>

int main() {
    // Create an unordered_map with string keys and int values
    std::unordered_map<std::string, int> student_scores;

    // Insert key-value pairs into the hash map
    student_scores["Alice"] = 95;
    student_scores["Bob"] = 87;
    student_scores["Charlie"] = 92;

    // Access values using keys
    std::cout << "Bob's score: " << student_scores["Bob"] << std::endl;

    // Check if a key exists
    if (student_scores.find("Alice") != student_scores.end()) {
        std::cout << "Alice's score: " << student_scores["Alice"] << std::endl;
    } else {
        std::cout << "Alice not found." << std::endl;
    }

    // Iterate through the hash map
    for (const auto& pair : student_scores) {
        std::cout << pair.first << "'s score: " << pair.second << std::endl;
    }

    return 0;
}
