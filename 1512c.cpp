#include <iostream>
#include <string>
int main()
{
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int a, b;
        std::string s, ss;
        std::cin >> a >> b;
        for (int j = 0; j < a + b; j++) {
            std::cin >> s;
        }
        std::cout << s<<a<<b;
        for (int j = 0; j < a + b; j++) {
            if ((a + b) % 2 != 0 || s[(a + b) / 2 + 1] == '?') {
                if (a % 2 != 0) {
                    ss[(a + b) / 2 + 1] = '0';
                    a--;
                }
                if (b % 2 != 0) {
                    ss[(a + b) / 2 + 1] = '1';
                    b--;
                }
            }
            if ((a + b) % 2 != 0 || s[(a + b) / 2 + 1] != '?') {
                std::cout << '-1' << std::endl;
                continue;
            
            }
            if (s[j] == '1') {
                ss[j] = '1';
                ss[(a + b) - j + 1] = '1';
                b-=2;
            }
            else if (s[j] == '0') {
                ss[j] = '0';
                ss[(a + b) - j + 1] = '0';
                a-=2;
            }
            else {
                if (s[(a + b) - j + 1] == '1') {
                    ss[j] = '1';
                    ss[(a + b) - j + 1] = '1';
                    b-=2;
                }
                else if (s[(a + b) - j + 1] == '0') {
                    ss[j] = '0';
                    ss[(a + b) - j + 1] = '0';
                    a-=2;
                }
                else {
                    if (a % 2 == 0) {
                        ss[j] = '0';
                        ss[(a + b) - j + 1] = '0';
                        a-=2;
                    }
                    else if (b % 2 == 0) {
                        ss[j] = '1';
                        ss[(a + b) - j + 1] = '1';
                        b-=2;
                    }
                    
                }
               
            } std::cout << ss << std::endl;
        }
    }

    return 0;
}
