/*
  compile:  g++ -lpthread main.cpp Thread.cpp MyThread.cpp
 */

#include <iostream>

#include <unistd.h>

#include "MyThread.h"

using std::cout;
using std::endl;

int main () {
  thread::MyThread thread;
  thread.start();

  int i = 0;
  while (i++ < 20) {
    cout << "----------------main thread-------------" << endl;
    sleep(1);
  }

  //thread.join();
  thread.kill();
  
  i = 0;
  while (i++ < 10) {
    cout << "----------------main thread-------------" << endl;
    sleep(1);
  }

  
}
