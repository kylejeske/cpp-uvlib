#include "libs/uvlib/uv.hpp"

#include "TaskRunner.hpp"
#include <iostream>

using namespace std;
using namespace uvEventLoop;
using namespace Tasks;

int main() {

  auto Process = new Runner();
  Process->StartRunner();

  cout << "Hello World!\n";

  return 0;
}
