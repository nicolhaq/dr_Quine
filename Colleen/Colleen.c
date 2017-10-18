#include <stdio.h>
#define Q(x)char*s=#x;x
#define A(y)char*e=#y;y
#define B(z)char*r=#z;z
Q(int func(){return(0);})
/*
	lol
*/A(int main(){func();)
/*
	lol
*/B(printf("#include <stdio.h>\n#define Q(x)char*s=#x;x\n#define A(y)char*e=#y;y\n#define B(z)char*r=#z;z\nQ(%s)\n/*\n	lol\n*/A(%s)\n/*\n	lol\n*/B(%s)\n",s,e,r);return(0);})
