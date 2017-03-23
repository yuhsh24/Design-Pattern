# -*- coding:utf-8 -*-

from Blog import *
from Observer import *

if "__main__" == __name__:
    blog = BlogCSDN("YHSBLOG")
    observer1 = ObserverBlog("observer1", blog)
    observer2 = ObserverBlog("observer2", blog)
    blog.Attach(observer1)
    blog.Attach(observer2)
    blog.SetStatus("RandomForest Introduction")
    blog.Notify()
    blog.SetStatus("DeepLearning Introduction")
    blog.Notify()

