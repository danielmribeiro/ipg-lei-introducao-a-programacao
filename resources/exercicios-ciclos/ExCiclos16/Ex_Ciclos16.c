#include <stdio.h>

main()
{
    int n,i,j;

        printf("Linha? ");
        scanf("%d",&n);

         for(i = 1 ; i <= n ; i++){
            for(j = 1 ; j <= n-i ; j++){
                printf(" ");
            }
            for(j = 1; j <= i*2-1; j++){
                printf("*");
            }
            printf("\n");
        }

system("pause");
return 0;
}
