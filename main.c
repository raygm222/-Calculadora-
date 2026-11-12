#include <stdio.h>

void soma(){
    float a,b;
    printf ("Digite o primeiro número:");
    scanf ("%f", &a);
    printf ("Digite o segundo número:");
    scanf ("%f", &b);
    printf ("Resultado: %f + %f = %.2f\n", a,b,a+b);
}
void subtração(){
    float a,b;
    printf ("Digite o primeiro número:");
    scanf ("%f", &a);
    printf ("Digite o segundo número:");
    scanf ("%f", &b);
    printf ("Resultado: %f - %f = %.2f\n", a,b,a-b);
}
void multiplicação(){
    float a,b;
    printf ("Digite o primeiro número:");
    scanf ("%f", &a);
    printf ("Digite o segundo número:");
    scanf ("%f", &b);
    printf ("Resultado: %f * %f = %.2f\n", a,b,a*b);
}
void divisão(){
    float a,b;
    printf ("Digite o primeiro número:");
    scanf ("%f", &a);
    printf ("Digite o segundo número:");
    scanf ("%f", &b);
    
    if (b==0){
        printf ("Erro: Divisão por zero não é peemitida.\n");
        return;
    } 
    printf ("Resultado: %f ÷ %f = %.2f\n", a,b,a/b);
}
void sair(){
    printf ("Obrigado por usar a calculadora! Até a próxima.");
}

int main() {
    float n;
    char resposta;
    
    do { printf (" ===========================\n");
   printf ("Calculadora Simples\n");
  printf (" ===========================\n");
printf ("Selecione uma operação:\n");
printf ("1. Adição\n");
printf("2. Subtração\n");
printf("3. Multiplicação\n");
printf ("4. Divisão\n");
printf ("5. Sair\n");
printf ("Opção:");

    do {
        if (scanf ("%f", &n)!=1){
            printf ("Entrada invalida, selecione outra opção");
            while (getchar() != '\n');
            n = 0;
        }
    else if  (n<1 || n>5 || n!=(int)n){
        printf ("Entrada invalida, selecione outra opção");
    }
    } while (n<1 || n>5 || n!=(int)n);
    if (n==1){
        soma();
    }
    else if (n==2){
        subtração();
    }
    else if (n==3){
        multiplicação();
    }
    else if (n==4){
        divisão();
    }
    else if (n==5){
        sair();
        return 0;
    }
    if (n>=1 && n<=4){
        do{
    printf ("Deseja realizar outra operação? (s/n)");
    scanf (" %c", &resposta);
    
        if (resposta!='s'&&resposta!='S'&&
            resposta!='n'&&resposta!='N'){
            printf ("Resposta inválida. Por favor,digite 's' para sim e 'n' para não\n");
        }
        } while (resposta!='s'&&resposta!='S'&&
            resposta!='n'&& resposta!='N');
        if (resposta=='n' || resposta=='N'){
            sair();
            return 0;
        }
    }
    } while (resposta=='s'||resposta=='S');
    
    return 0;
}
