#include <stdio.h>
#define IN 1
#define OUT 0


int main(){ 
int  c,len_w,state;
len_w = 0;
state = IN;
while ((c = readchar()) != EOF){ 

    if (c == " " || c == '\t' ||  c == '\n'){
    state = OUT;
    }
    else if (state == OUT){
        len_w += 1;
        state = IN;
    }
}
}