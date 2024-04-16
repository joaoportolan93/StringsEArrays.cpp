#include <iostream>
int main (){
    int arr[3] = {1, 2, 3};
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 67;
    printf("Elemento alterado: %d, %d, %d\n", arr[0], arr[1], arr[2]);
    return 0;
}