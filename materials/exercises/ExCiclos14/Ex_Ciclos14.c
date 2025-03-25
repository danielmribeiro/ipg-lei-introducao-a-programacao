#include <stdio.h>

main()
{
    int n,i,j;

        printf("Linha? ");
        scanf("%d",&n);

         for(i = 0 ; i < n ; i++){
            for(j = 0 ; j <= i ; j++){
                printf("*");
            }
            printf("\n");
        }

system("pause");
return 0;
}
