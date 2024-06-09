//The next line is called Preprocessor Directive: Indicates that we would like to use the contents of
// the iostream library, which is part of the c++ standard library  that allow us to read and write text from/to
// the console (aka terminal).
#include <iostream>

/*
 * Multi line comment
 */
int main() {

    std::cout << "Entrer deux valeur séparer par un espace: ";

    int x{};
    int y{};

    std::cin >> x;

    std::cout << "Vous avez saisi: " << x << " et " << y << "\n";

    return 0;
}
