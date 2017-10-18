#include <fstream>
#include <string>
#define A(y)std::string e=#y;y
#define FT() A(int main(){std::ofstream fp;fp.open("Grace_kid.cpp");fp << "#include <fstream>\n#include <string>\n#define A(y)std::string e=#y;y\n#define FT() A("<< e <<")\n/*\n	lol\n*/FT()";fp.close();return(0);})
/*
	lol
*/FT()