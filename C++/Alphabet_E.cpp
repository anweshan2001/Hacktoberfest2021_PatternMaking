#include <stdio.h>

int main()
{
    int d[5] = {1,0,1,0,1};
    
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(d[i] == 0 && j < 5 && j> 0){
                printf("   ");
            }
            else
            printf(" * ");
        }
        printf("\n");
    }
    
    return 0;
}

