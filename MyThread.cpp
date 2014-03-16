#include "MyThread.h"

#include <iostream>

#include <unistd.h>

namespace thread {

using std::cout;
using std::endl;

void MyThread::run() {
  cout << "Mythread::run()" << endl;

  while (1) {
    cout << ">>MyThread<<" << endl;
    sleep(1);
  }
}

} // namespace thread
