#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <iostream>
#define A(y)std::string e=#y;y
#define C(w)5
A(int main(){std::ofstream fp;std::string execu;std::string fname;std::string comm;int c=C();if(c<=0){return(0);}if(strstr(__FILE__,"Sully_")){--c;}execu="Sully_" + std::to_string(c);fname=execu +".cpp";fp.open(fname.c_str());comm="g++ -Wall -Wextra -Werror -std=c++11 "+ fname +" -o "+ execu +" && ./"+ execu;fp << "#include <fstream>\n#include <string>\n#include <cstring>\n#include <cstdlib>\n#include <iostream>\n#define A(y)std::string e=#y;y\n#define C(w)" << c << "\nA(" << e << ")";fp.close();system(comm.c_str());return(0);})