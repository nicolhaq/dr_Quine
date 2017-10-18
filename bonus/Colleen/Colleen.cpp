#include <iostream>
#include <string>
#define Q(x)std::string s=#x;x
#define A(y)std::string e=#y;y
#define B(z)std::string r=#z;z
Q(int func(){return(0);})
/*
	lol
*/A(int main(){func();)
/*
	lol
*/B(std::cout << "#include <iostream>\n#include <string>\n#define Q(x)std::string s=#x;x\n#define A(y)std::string e=#y;y\n#define B(z)std::string r=#z;z\nQ(" << s <<")\n/*\n	lol\n*/A("<< e <<")\n/*\n	lol\n*/B("<< r <<")";return(0);})