#include <stdio.h>

int main() {
    
        float var[5] = { 1.1f,2.2f,3.3f };
         float (*ptr)[5];
        ptr = &var;
        printf("Value inside ptr : %u\n", ptr);
        ptr = ptr + 1;
        printf("Value inside ptr : %u", ptr);

        return 0;

    

}