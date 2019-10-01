#pragma once

#ifndef UVEVENTLOOP_CPP_H
#define UVEVENTLOOP_CPP_H

#include "uv.h"
#include <iostream>

using namespace std;

namespace uvEventLoop {

  class EventLoop {
  public:
    EventLoop() {
      //this.uv = uv_fs_mkdtemp
    }
    void onConnect(ConnectStatus status) {
    }
    void newMessage(const char *buf, ssize_t size) {
      write(buf, (unsigned)size, nullptr);
    }

  private:
    std::shared_ptr<uv_any_req> reqAddr;
  };

} // namespace uvEventLoop

#endif