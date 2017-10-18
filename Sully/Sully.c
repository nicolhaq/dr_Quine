#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define A(y)char*e=#y;y
#define C(w)5
A(int main(){FILE *fp;char execu[10];char fname[10];char comm[70];int c=C();if(c<=0){return(0);}if(strstr(__FILE__,"Sully_")){--c;}sprintf(execu,"Sully_%d",c);sprintf(fname,"%s.c",execu);fp=fopen(fname,"w");sprintf(comm,"clang -Wall -Wextra -Werror %s -o %s && ./%s",fname,execu,execu);fprintf(fp,"#include <stdio.h>\n#include <string.h>\n#include <stdlib.h>\n#define A(y)char*e=#y;y\n#define C(w)%d\nA(%s)",c,e);fclose(fp);system(comm);return(0);})