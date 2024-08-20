#include <stdio.h>
#include <math.h>

int main()
{
    // Aqui optei de deixar o float, invés do Double para a declaração das variáveis.
    float bulboSeco, umidadeRelativa, tempMeioRefri, condutividade, convInterno, convExterno, tempOrvalho, c1, comprimento;
    
    // Entrada do valor do Bulbo Seco (°C).
    printf("Digite o valor do Bulbo Seco (°C): ");
    scanf("%f", &bulboSeco);
    
    // Entrada do valor da Umidade Relativa (%).
    printf("Digite o valor da Umidade Relativa (%%): ");
    scanf("%f", &umidadeRelativa);
    
    // Entrada da temperatura do meio refrigerado (°C).
    printf("Digite a temperatura do meio refrigerado (°C): ");
    scanf("%f", &tempMeioRefri);
    
    // Entrada da condutividade térmica do isolamento (W/(m.K)).
    printf("Digite a condutividade térmica do isolamento) (W/(m.K): ");
    scanf("%f", &condutividade);
    
    // Entrada do coeficiente de convecção interno (W/m²°C).
    printf("Digite o coeficiente de convecção interno (W/m²°C): ");
    scanf("%f", &convInterno);
    
    // Entrada do coeficiente de convecção externo (W/m²°C).
    printf("Digite o coeficiente de convecção externo (W/m²°C): ");
    scanf("%f", &convExterno);
    
    // Tive que adicionar a biblioteca <math.h> para que a função pow seja utilizada, aqui é a forma: pow(base, expoente).
    tempOrvalho = (109.8 + bulboSeco) * pow(umidadeRelativa / 100, 0.1247) - 109.8;
    c1 = (tempOrvalho - tempMeioRefri) / (bulboSeco - tempOrvalho);
    comprimento = 1000 * condutividade * (c1 * (1 / convInterno) - (1 / convExterno));
    
    // Resultado final.
    printf("Espessura do material isolante: %.2f mm\n", comprimento);
}
