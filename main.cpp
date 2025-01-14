#include <iostream>
#include <unordered_map>

void addContactFunc(std::unordered_map<std::string, std::string>& phoneMap) {
        std::string name, phonenumber;
        std::cout << "Name: " << std::endl;
        std::cin >> name;
        std::cout << "Phonenumber";
        std::cin >> phonenumber;

        phoneMap[name] = phonenumber;
        std::cout << "Sucessfully added Contact ";
}

void searchContactFunc(std::unordered_map<std::string, std::string>& phoneMap) {
        std::string searchForName;
        std::cout << "Search for a name: " << std::endl;
        std::cin >> searchForName;

        if (phoneMap.find(searchForName) != phoneMap.end()) {
            std::cout << "Found Contact!" << std::endl;
            std::cout << "Contact Information:" << std::endl;

            std::cout << phoneMap[searchForName];
        }
        else if (phoneMap.find(searchForName) == phoneMap.end()) {
            std::cout << "Contact could not be found";
        }
}

int main() {
    int choice;

    std::unordered_map<std::string, std::string> phoneMap;

    std::cout << "1. Add a phonenumber" << std::endl;
    std::cout << "2. Search for a phonenuber";

    std::cin >> choice;
    
    
    phoneMap["max"] = "345-678-342";

    switch (choice)
    {
    case 1:
        addContactFunc(phoneMap);
        break;

    case 2:
        searchContactFunc(phoneMap);
        break;
    }
}