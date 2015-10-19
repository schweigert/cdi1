/////////////////////////////
// CRIADO POR MARLON HENRY //
/////////////////////////////
//     CDI 2 - MARIA BER.  //
/////////////////////////////

#include <stdio.h>

double F(double X){

    return X*X; // EDITE AQUI A SUA FUNÇÃO!

}

double Deriva(double x){
    return (F(x+0.0001)-F(x))/0.0001;
}

int main (void){
    double ponto = 0; // EDITE AQUI O SEU PONTO!
    scanf ("%lf", &ponto);
    printf ("A derivada no ponto vale: %.3lf\n", Deriva(ponto));
    return 0;
}
