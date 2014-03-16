#ifndef _THREAD_H
#define _THREAD_H

#include <pthread.h>

namespace thread {

class Thread {

public:
  void start();
  virtual void run() = 0;
  void join();
  void kill();

private:
  pthread_t thread_id;
};

} // namespace thread

#endif // _THREAD_H
