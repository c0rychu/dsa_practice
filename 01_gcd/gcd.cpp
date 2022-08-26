# include <iostream>
# include <stdexcept>
# include <stdlib.h>

int gcdByDef(int a, int b) {
    int small = a <= b ? a : b; 
    //std::cout << "small: " << small << ", a=" << a << ", b=" << b << std::endl;
    int ans;
    for (int i=1; i<=small; ++i) {
        if ( (a%i == 0) && (b%i == 0) ) {
            ans = i;
            //std::cout << ans << std::endl;
        } 
    }
    return ans;
}


int main(int argc, char** argv) {
    try {
        if (argc != 3) {
            throw std::invalid_argument("Require exactly two input numbers");
        }
    
        int x, y;
        x = std::strtol(argv[1], NULL, 10);
        y = std::strtol(argv[2], NULL, 10);

        if (x <=0 or y <= 0) {
            throw std::invalid_argument("Two numbers must be positive integer");
        } 

        std::cout << gcdByDef(x, y) << std::endl;
        return 0;
    }
    catch (const std::invalid_argument &e) {
        std::cout << "Error: " << e.what() << std::endl;
        std::cout << "Usage: gcd <int a> <int b>" << std::endl;
        return -1;
    }
}
