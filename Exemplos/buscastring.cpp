#include <iostream>
#include <string>

int main(){
    std::string str = "Hello, world";
    int pos = str.find ("world");
    if (pos != std::string::npos) {
        printf("Encontrado na posição: %d\n", pos);
    }
    return 0; 
}