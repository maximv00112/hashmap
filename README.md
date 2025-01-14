# First Hashmap Programm 
In this Programm i made my first Hashmap Programm

To begin with i started making the main programm
`
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
`
