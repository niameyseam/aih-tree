// Amina Ibrahim 
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[]){

if (argc == 2)
{
string h;

int a=atoi(argv[1]);

h=get_string("plaintext: ");

printf("cyphertext: ");
for(int i=0; i<strlen(h); i++)

if(isalpha(h[i]))
{
    if(islower(h[i]))
        {
            printf("%c",(((h[i]- 97)+ a)%26)+ 97);
        }
    if(isupper(p[i]))
        {
            printf("%c",(((h[i]- 65)+ a)%26)+ 65);
        }
}
else
        {
            printf("%c",h[i]);
        }
    printf("\n");
    }
}
