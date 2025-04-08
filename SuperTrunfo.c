#include <stdio.h>

// Estrutura para representar uma carta do Super Trunfo

int main(){
    char Estado[10], Estado_02 [10];
    char cidade[20], cidade_02[20];
    char codigo[5], codigo_02[5];
    int população, população_02;
    int Pontosturisticos, Pontosturisticos_02;
    float PIB, PIB_02;
    float area, area_02;
 
    // entrada de dados carta 1
 
    printf("Digite seu estado \n");
    scanf("%s", &Estado);

    printf("Digite seu cidade \n");
    scanf("%s", &cidade);
    
    printf("Codigo \n");
    scanf("%s", &codigo);
    
    printf("Digite a população do Estado \n");
    scanf("%d", &população);

    printf("Digite a quantidade de pontos turisticos \n");
    scanf("%d", &Pontosturisticos);
    
    printf("Digite a quantidade do PIB do pais \n");
    scanf("%f", &PIB);

    printf("Digite a area do pais \n");
    scanf("%f", &area);
     
    // entrada de dados carta 2

    printf("Digite seu estado \n");
    scanf("%s", &Estado_02);
    
    printf("Digite seu cidade \n");
    scanf("%s", &cidade_02);
        
    printf("Codigo \n");
    scanf("%s", &codigo_02);
        
    printf("Digite a população do Estado \n");
    scanf("%d", &população_02);
    
    printf("Digite a quantidade de pontos turisticos \n");
    scanf("%d", &Pontosturisticos_02);
        
    printf("Digite a quantidade do PIB do pais \n");
    scanf("%f", &PIB_02);
    
    printf("Digite a area do pais \n");
    scanf("%f", &area_02);
     
    // exibindo a carta 1
 
    printf("Carta: 1 \n");
    printf("Estado: %s \n", Estado);
    printf("Cidade: %s \n", cidade);
    printf("Codigo: %s \n", codigo);
    printf("População: %d \n", população);
    printf("Pontos Turisticos: %d \n", Pontosturisticos);
    printf("PIB: %f \n", PIB);
    printf("Area: %f \n", area);
     
    // exibindo a carta 2

    printf("Carta: 2 \n");
    printf("Estado: %s \n", Estado_02);
    printf("Cidade: %s \n", cidade_02);
    printf("Codigo: %s \n", codigo_02);
    printf("População: %d \n", população_02);
    printf("Pontos Turisticos: %d \n", Pontosturisticos_02);
    printf("PIB: %f \n", PIB_02);
    printf("Area: %f \n", area_02);
    }