// * larni uchburchak ko'rinishida chiqarish
#include <stdio.h>

int main()
{
    printf("Son kiriting: ");
    int n;
    scanf("%d",&n);
    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            printf(" ");
        }
        for(int k = n; k>n-i; k--){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
