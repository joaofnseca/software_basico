#include <stdio.h>

/* --- Protótipos das Funções --- */
int my_strlen(const char *s1);
char* my_strcpy(char *s1, const char *s2);
char* my_strcat(char *s1, const char *s2);
int my_strcmp(const char *s1, const char *s2);
char* my_strchr(const char *s1, int ch);
int my_substring(const char str1[], const char str2[]);



/* --- Implementação das Funções --- */

/* Retorna o comprimento da string s1 */
int my_strlen(const char *s1) {
    int cont = 0;

    while(*s1 != '\0'){
        cont++;
        s1++;
    }
    return cont;
}

/* Copia a string s2 na string s1 */
char* my_strcpy(char *s1, const char *s2) {
    
    while(*s2 != '\0'){
        *s1 = *s2;
        s1++;
        s2++;
    }
    return NULL;
}

/* Concatena a string s2 no final da string s1 */
char* my_strcat(char *s1, const char *s2) {
    int tam = my_strlen(s1);
    s1 += tam;

    while(*s2 != '\0'){
        *s1 = *s2;
        s1++;
        s2++;
    }
    return NULL;
}

/* Retorna 0 caso as strings sejam iguais */
int my_strcmp(const char *s1, const char *s2) {
    while(*s1 != '\0'){
        if(*s1 != *s2){
            return 0;
        }
        s1++;
        s2++;
    }
    return 1;
}

/* Retorna a primeira ocorrencia de ch na string s1 */
char* my_strchr(const char *s1, int ch) {
    return NULL;
    while(*s1 != '\0'){
        if(*s1 == ch){
            //return (char*)*s1;
        }
        s1++;
    }
    return NULL;
}

/* Verifica se str2 e substring de str1, retornando a posicao ou -1 */
int my_substring(const char str1[], const char str2[]) {
    int tamStr2 = my_strlen(str2);
    int cont = 0;

    while(*str1 != '\0'){
        if(*str1 == *str2){
            cont++;
            str2++;
            if(cont == tamStr2){
                return 1;
            }
        } else {
            str2 = str2 - cont;
            cont = 0;

        }
        str1++;
    }

    return -1;
}

/* --- Função Principal --- */
int main() {
    char str_destino[100] = "Base";
    char str_origem[] = " de Dados";
    char busca = 'D';
    
    printf("--- Testando my_strlen ---\n");
    printf("Comprimento de '%s': %d\n\n", str_destino, my_strlen(str_destino));

    printf("--- Testando my_strcpy ---\n");
    my_strcpy(str_destino, "PUCRS");
    printf("Destino apos strcpy: %s\n\n", str_destino);

    printf("--- Testando my_strcat ---\n");
    my_strcat(str_destino, str_origem);
    printf("Destino apos strcat: %s\n\n", str_destino);

    printf("--- Testando my_strcmp ---\n");
    printf("Comparando 'ABC' com 'ABC': %d\n", my_strcmp("ABC", "ABC"));
    printf("Comparando 'ABC' com 'ABD': %d\n\n", my_strcmp("ABC", "ABD"));

    printf("--- Testando my_strchr ---\n");
    char *ptr = my_strchr(str_destino, busca);
    if (ptr) {
        printf("Caractere '%c' encontrado na posicao: %ld\n\n", busca, (long)(ptr - str_destino));
    } else {
        printf("Caractere nao encontrado.\n\n");
    }

    printf("--- Testando my_substring ---\n");
    int pos = my_substring("Linguagem C", "uagem");
    printf("Posicao da substring 'uagem' em 'Linguagem C': %d\n", pos);
    
    int pos_falha = my_substring("Linguagem C", "Java");
    printf("Posicao da substring 'Java' em 'Linguagem C': %d\n", pos_falha);

    return 0;
}