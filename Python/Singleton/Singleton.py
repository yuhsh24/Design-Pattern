# -*- coding:utf-8 -*-

import threading

class Singleton(object):

    __instance = None
    __lock = threading.Lock()

    def __init__(self):
        pass

    def __new__(cls, *args, **kwargs):
        if not cls.__instance:
            cls.__lock.acquire()
            if not cls.__instance:
                cls.__instance = super(Singleton, cls).__new__(cls, *args, **kwargs)
            cls.__lock.release()
        return cls.__instance

if "__main__" == __name__:
    instance1 = Singleton()
    instance2 = Singleton()
    if id(instance1) == id(instance2):
        print "This is a successful Singleton."
    else:
        print "This is not a successful Singleton."
