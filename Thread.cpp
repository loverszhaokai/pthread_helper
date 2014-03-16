#include "Thread.h"

#include <iostream>

namespace thread {

using std::cout;
using std::endl;

static void ThreadCallBack(Thread* who) {
  int old_type = 0;
  
  // this pthread can be cancelled at anytime
  pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS, &old_type);
  who->run();
}

typedef void* (*pthread_callback)(void*);

void Thread::start() {
  cout << "Thread::start()" << endl;
  pthread_create(&thread_id, NULL,
                 reinterpret_cast<pthread_callback>(ThreadCallBack), this);
}

void Thread::join() {
  cout << "Thread::join()" << endl;
  pthread_join(thread_id, NULL);
}

void Thread::kill() {
  cout << "Thread::kill()" << endl;
  pthread_cancel(thread_id);
}

} // namespace thread
