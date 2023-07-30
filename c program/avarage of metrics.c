#include<stdio.h>
main()
{
    int a[3][3],i,j,s=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }

   for(i=0;i<3;i++){
        for(j=0;j<3;j++){

            printf(" %d ",a[i][j]);
            s=s+a[i][j];
        }
        printf("\n");
    }

printf("the avg of matrics: %f\n",s/9.0);

}
