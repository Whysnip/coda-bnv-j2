#include <stdio.h>

int main(void)
{
    char prenom[100];
    int age;

    printf("Bonjour, quel est votre prénom ?\n");
    scanf("%s", prenom);

    printf("Bonjour %s, quel est votre âge ?\n", prenom);
    scanf("%d", &age);

    printf("%s, si vous êtes de la fin d'année, votre année de naissance est %d sinon c'est %d\n", prenom, 2025 - age, 2026 - age);

    return 0;
}
