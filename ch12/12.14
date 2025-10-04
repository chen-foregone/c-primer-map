#include<memory>
#include<string>
#include <stdlib.h>
#include<new>
using namespace std;
struct conection
{
	int * pos =nullptr ;
};
void cancle(conection* con)
{
	free(con);
}
int main()
{
	shared_ptr<conection>manage((conection*)malloc(sizeof(conection)), cancle);
}
