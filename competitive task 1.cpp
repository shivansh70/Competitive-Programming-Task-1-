#include <iostream>
using namespace std;

int main(void) {
   char str[] = "A string.";
   char *point = str;

   cout << str[0] <<' '<< *point <<' '<<point[3]<<"\n";
   point+= 2;
   cout <<*point<<' '<< point[2] <<' '<< point[5];

   return 0;
}
