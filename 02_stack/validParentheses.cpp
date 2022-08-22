# include <iostream>
# include <stdexcept>
# include <stack>
# include <string>

void validParentheses(std::string input) {
    std::stack<char> s;

    s.push('(');
    s.push(')');
}




int main(int argc, char** argv) {
    try {
        if (argc != 2) {
            throw std::invalid_argument("Require a input string");
        }
        validParentheses(argv[1]);
        return 0;
    }
    catch (const std::invalid_argument e) {
        std::cout << "Error: " << e.what() << std::endl;
        std::cout << "Usage: validParentheses <string>" << std::endl;
    }
}

