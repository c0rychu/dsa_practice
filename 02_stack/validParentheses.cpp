# include <iostream>
# include <stdexcept>
# include <stack>
# include <string>


bool validParentheses_stl(const std::string &input) {
    std::stack<char> s;
    int N = input.length();
    char ch;

    for (int i = 0; i < N; ++i) {
        ch = input[i];
        if ( (ch == '(') || (ch == '[') || (ch == '{') ) {
            s.push(ch);
        } 
        else if ( (ch == ')') || (ch == ']') || (ch == '}') ) {
            if (s.empty()) {
                return false;
            } 
            else {
                switch (ch) {
                    case ')':
                        if (s.top() != '(') return false;
                        break;
                    case ']':
                        if (s.top() != '[') return false;
                        break;
                    case '}':
                        if (s.top() != '{') return false;
                        break;
                }
            }
            s.pop();
        }
    }
    if (s.empty()) {
        return true;
    }
    else {
        return false;
    }
}


int main(int argc, char** argv) {
    try {
        if (argc != 2) {
            throw std::invalid_argument("Require a input string");
        }
        std::cout << "Input String: " << argv[1] << std::endl;
        if (validParentheses_stl(argv[1])) {
            std::cout << "Is Valid" << std::endl;
        }
        else {
            std::cout << "Is Not Valid" << std::endl;
        }
        return 0;
    }
    catch (const std::invalid_argument e) {
        std::cout << "Error: " << e.what() << std::endl;
        std::cout << "Usage: validParentheses <string>" << std::endl;
        return -1;
    }
}

