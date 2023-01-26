#include <stdio.h>

int main(){
    float massa, altura, imc;

    scanf("%f %f", &massa, &altura);

    imc = massa / (altura*altura);

    if (imc < 18.5){
        printf("Magreza");
    } else {
        if (imc >= 18.5 && imc < 25.0){
            printf("Saudavel");
        } else {
            if (imc >= 25.0 && imc < 30.0){
                printf("Sobrepeso");
            } else {
                if (imc >= 30.0 && imc < 35.0){
                    printf("Obesidade Grau I");
                } else {
                    if (imc >= 35.0 && imc < 40.0){
                        printf("Obesidade Grau II");
                    } else {
                        if (imc >= 40){
                            printf("Obesidade Grau III");
                        }
                    }
                }
            }
        }
    }
    return 0;
}