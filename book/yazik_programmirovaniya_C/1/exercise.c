#include <string.h>
#include <stdio.h>
#define IN 1
#define OUT 0

int main(){
    int c,s,r;
    int state = OUT;
    while((c = getchar() )!= EOF){
        if (c == " " || c == '\r' || c == '\n' || c == '\t' || c == ' '){
        state = OUT;
        putchar('\n');
        }
        else if (state == OUT){
        putchar(c);
        state = IN;
        }
        else if (state == IN){
            putchar(c);
        }

    }

}