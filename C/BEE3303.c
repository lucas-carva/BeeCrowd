#include <stdio.h>
#include <string.h>

int main() {
 
    char word[25];
    int size;
    
    scanf("%s", word);
    size = strlen(word);
    
    if(size < 10) printf("palavrinha\n");
    else printf("palavrao\n");
    
    return 0;
}