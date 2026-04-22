#include <math.h>
#include "funcoes_aux.h"
#include "funcoes.h"

float div_e_soma(float dividendo, float divisor) {
    if (divisor == 0)
        return soma(dividendo, divisor);

    return (dividendo / divisor) + soma(dividendo, divisor);
}

float raiz(float dividendo, float divisor) {
   
   float res_div_soma = div_e_soma(dividendo,divisor);
   return sqrtf(res_div_soma);
}


