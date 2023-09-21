#include <stdio.h>

int main(){
int c,i,nwite,nother;
int ndigit[10];
nwite=nother=0;

for (i=0;i<10;++i){
    ndigit[i]=0;
}
while ((c = getchar()) != EOF){
if (c >= '0' && c <= '9'){
    ++ndigit[c-'0'];
}
else if (c == ' ' || c == '\n' || c == '\t'){
    ++nwite;
}
else{
    ++nother;
    }
}
printf("digit: ");
for (i=0;i<10;++i){
    printf("%d",ndigit[i]);
}


}
