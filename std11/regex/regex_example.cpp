#include <iostream>
#include <regex>
#include <string>

// C++11: std::regex
// Use case: Pattern matching and text processing.
// How to use: std::regex re(pattern); std::smatch match; std::regex_match(str, match, re);
// Methods: regex_match, regex_search, regex_replace.

int main() {
    std::string text = "Email: user@example.com";
    std::regex email_pattern(R"(\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Z|a-z]{2,}\b)");

    if (std::regex_search(text, email_pattern)) {
        std::cout << "Email found in text" << std::endl;
    }

    std::string phone = "Call 123-456-7890";
    std::regex phone_pattern(R"(\d{3}-\d{3}-\d{4})");
    std::smatch match;
    if (std::regex_search(phone, match, phone_pattern)) {
        std::cout << "Phone: " << match[0] << std::endl;
    }

    // Replace
    std::string replaced = std::regex_replace(text, email_pattern, "[EMAIL]");
    std::cout << "Replaced: " << replaced << std::endl;

    return 0;
}