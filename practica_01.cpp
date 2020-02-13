#include <stdio.h>
#include <stdlib.h>

int main(){
    float a,b,c;
    int opt;
    printf("n1=suma\n2=resta\n3=multiplicacion\n4=division ");
    printf("seleccione una opcion:");
    scanf("%d",&opt);
    printf("ingrese el primer operando:");
    scanf("%f",&a);
    printf("ingrese el segundo operando:");
    scanf("%f",&b);
    if(opt==1){
        c=a+b;
    }
    else if(opt==2){
        c=a-b;
    }
    else if(opt==3){
        c=a*b;
    }
    else if(opt==4){
        while(b==0){
            printf("error b,debe ser distinto de 0");
            printf("introduce el segundo operando:");
            scanf("%f",&b);
        }
        c=a/b;
    }
    else{
        printf("opcion invalida");
        c=0;
    }
    printf("el resultado es %f",c);
}
