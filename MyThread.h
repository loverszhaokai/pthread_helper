#ifndef _MYTHREAD_H
#define _MYTHREAD_H

#include "Thread.h"

namespace thread {

  class MyThread : public Thread {

 public:
    virtual void run();
  };

} // namespace thread

#endif // _MYTHREAD_H
