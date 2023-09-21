/*
Программа, которая подсчитывает строки, слова, символы.
*/
#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int c,nl,nw,nc,state;
    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar() ) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;        
        if (c == ' ' || c == '\t' || c == '\r' || c == '\n'){

            state = OUT;
        }else if (state == OUT){
            nw++;
            state = IN;
        }
        /* code */
    }
    printf("%d %d %d ",nc,nw,nl);
    

}
