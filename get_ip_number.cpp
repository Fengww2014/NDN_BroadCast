#include <stdio.h>
#include <fstream>
using namespace std;
int get_ip_num()
{

        int value;
        fstream fs;
        fs.open("ip_num.txt");
        if(!fs.is_open())
              printf("opened error");
        else 
              fs>>value;
        return value;           
}
