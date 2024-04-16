#include <iostream>
#include <string>

int main(){
    std::string str1 = "ah,";
    std::string str2 = "Irmão,";
    std::string str3 = "Sla ";
    std::string result = str1 + str2 + str3;
    printf("Concatenado: %s\n", result.c_str());
    return 0;
}
