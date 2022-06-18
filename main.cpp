/*
* Example script.
*/
#include "src/utils.hpp"
#include <string>
#include <iostream>
int main(){
    utils_base::utils o;

    char item = 'V';
    std::string quote = "Hello world, I'm an auxiliar string";
    std::string name = o.add_space("Valeria");
    std::string multiplied = o.multiply_me(name, 100);
    int count = o.count_chars(quote);

    std::cout << "Counting chars on quote: " << count << std::endl;
    std::cout << "Counting chars on multiply quote: " << o.count_chars(multiplied) << std::endl;
    std::cout << "Counting " << item << ": " << o.count_special(multiplied, item) << std::endl;
    std::cout << multiplied << std::endl;

    return 0;
}