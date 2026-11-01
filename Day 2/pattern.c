#include <stdio.h>
int main(){
    for(int i = 0 ; i < 5 ; i++){
        for(int space = 0 ; space < 4 -i; space++){
            printf(" ");
        }
        int n = 1;
        for(int j = 0 ; j <= i ; j++){
            printf("%d" , n);
            n = n*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}