#include <iostream>
#include <string>
#include <string.h>
#include "kv.pb.h"
#include "head.pb.h"
 
using namespace std;
 
int main(int argc, char** argv)
{
  kv k;
  k.set_key("name");
  k.set_value("zhouyang");
 
  cout << k.key() << ":" << k.value() << endl;
 
  head h;
  h.set_type(2016);
  h.set_st("good luck");
  cout << h.type() << ":" << h.st() << endl;
  return 0;
}
