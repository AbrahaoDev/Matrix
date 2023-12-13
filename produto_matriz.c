#include <stdio.h>
int main(){
    int i,j,z,x,x1,y,y1,s=0,s1=0,result=0;
    printf("Entre com o tamanho da primeira matriz\n");
    scanf("%d%d",&x,&y);
     printf("Entre com o tamanho da segunda matriz\n");
    scanf("%d%d",&x1,&y1);
    int matriz1[x][y], matriz2[x1][y1];
    printf("Entre com os elementos da primeira matriz\n");
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            scanf("%d", &matriz1[i][j]);
        };
    };
printf("Entre com os elementos da segunda matriz\n");
    for(i=0;i<x1;i++){
        for(j=0;j<y1;j++){
            scanf("%d", &matriz2[i][j]);
        };
    };
int matriz3[x][y1];
for(i=0;i<x;i++){
    for(j=0;j<y1;j++){
        matriz3[i][j]=0;
    };
};
        for(i=0;i<x;i++){
            for(j=0;j<y1;j++){
                for(z=0;z<y;z++){
                     matriz3[i][j]=  matriz3[i][j] + (matriz1[i][z]*matriz2[z][j]);
                };
               
            };
           
        };
       
      printf("\n");
for(i=0;i<x;i++){
    printf("|");
    for(j=0;j<y1;j++){
        printf("%d ", matriz3[i][j]);
    }
     printf("|");
    printf("\n");
} 
};