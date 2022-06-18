#ifndef utils_hpp
#define utils_hpp

#include <iostream>
#include <string>
using namespace std;

namespace utils_base{
    class utils{
        public:
            utils(){}
            string concat(string a, string b){
                return a + b;
            }
            string multiply_me(string a, int times){
                string r = "";
                if(times > 0){
                    for(int i = 0; i < times; i++){
                        r = r + a;
                    }
                }
                return r;
            }
            int count_chars(string a){
                int sum = 0;
                for(char x : a){
                    if(x != ' '){
                        sum++;
                    }
                }
                return sum;
            }
            int count_special(string a, char item){
                int sum = 0;
                for(char x : a){
                    if(x == item){
                        sum++;
                    }
                }
                return sum;
            }
            string add_space(string a){
                return a + " ";
            }
    };
};

#endif