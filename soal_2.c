#include <stdio.h>
#include <stdlib.h>

int main() {
    int da[10];  
    int largestNumber = 0;
    for(int i = 0; i < 10; i++) {
        scanf("%d", &da[i]);  
        if(da[i]>largestNumber){
            largestNumber = da[i];
        }
    }
    
    printf("%d\n", largestNumber); 

    return 0;
}
