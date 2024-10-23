#include <stdio.h>
int main() {
  
    int var1 = 10;
    int var2 = 20;
    int var3 = 30;
    
    int* ptr_arr[3] = { &var1, &var2, &var3 };
    
    for (int i = 0; i < 3; i++) {
        printf("Value of var%d: %d\tAddress: %p\n", i + 1, *ptr_arr[i], ptr_arr[i]);
    }
    
    return 0;
}
