#include <iostream>
#include <map>
#include <vector>
#include <string>

int main() {
    std::string text;
    std::cout << "[IN]: ";
    std::getline(std::cin, text);

    std::map<char, int> symbolFrequency;

    for (char c : text) {
        symbolFrequency[c]++;
    }

    std::map<int, std::vector<char>, std::greater<>> sortedFrequency;
    for (const auto& pair : symbolFrequency) {
        sortedFrequency[pair.second].push_back(pair.first);
    }

    std::cout << "[OUT]:\n";
    for (const auto& pair : sortedFrequency) {
        for (char c : pair.second) {
            std::cout << c << ": " << pair.first << std::endl;
        }
    }

    return 0;
}