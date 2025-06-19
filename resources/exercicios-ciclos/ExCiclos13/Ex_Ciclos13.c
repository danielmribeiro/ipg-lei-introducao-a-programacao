#include <stdio.h>

main()
{
    int vi,vf,i;

        printf("Valor Inicial?: ");
        scanf("%d",&vi);

        printf("Valor Final?: ");
        scanf("%d",&vf);

        if( vi < vf){
            for(i = vi; i <= vf; i++){
                printf("%d",i);
            }
        }else{
            for(i = vf; i <= vi ; i++){
                printf("%d",i);
            }
        }
        printf("\n");

system("pause");
return 0;
}
