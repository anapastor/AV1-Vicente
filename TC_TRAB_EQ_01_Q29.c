#include <stdio.h>
#include <string.h>

int main() {
    
    char name[100];
    char age[50];
    char address[100];
    char tel[50];
    printf("Digite seu Nome:\n");
    scanf("%s", name);

    printf("Digite sua Idade:\n");
    scanf("%s", age);

    printf("Digite seu Endereço:\n");
    scanf("%s", address);

    printf("Digite seu Telefone:\n");
    scanf("%s", tel);

    printf("Seu nome é %s, você tem %s anos, mora na rua %s, e seu telefone é %s.", &name, &age, &address, &tel);
    


    return 0;
}

    //nome, endereço, telefone, idade
    // strcpy(sentence, "Seu nome é X, você tem Y anos, mora na rua Z, e seu telefone é J.");
    // sentence [12] = '&name';
    //sentence [24] = '&age';
    //sentence [44] = '&address';
    //sentence [64] = '&tel';

    //printf("%s\n", sentence);