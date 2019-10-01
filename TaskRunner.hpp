#pragma once
#ifndef TASKRUNNER_H
#define TASKRUNNER_H

#include <iostream>

using namespace std;

namespace Tasks {

  class Runner {
  public:
    Runner() {}
    ~Runner() {
      cout << "so, so, far away ... I couldn't get away." << endl;
    }
    void StartRunner() {
      cout << "I ran." << endl;
    }

  private:
    void setHandle(char32_t *handle) {
      this->handle = handle;
    }
    char32_t *handle;
  };

} // namespace Tasks

#endif