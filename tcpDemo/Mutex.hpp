#pragma once

#include <iostream>
#include <pthread.h>

class Mutex
{
public:
    pthread_mutex_t mutex_;
    Mutex()
    {
        pthread_mutex_init(&mutex_, nullptr);
    }
    void lock()
    {
        pthread_mutex_lock(&mutex_);
    }
    void unlock()
    {
        pthread_mutex_unlock(&mutex_);
    }
    ~Mutex()
    {
        pthread_mutex_destroy(&mutex_);
    }
};