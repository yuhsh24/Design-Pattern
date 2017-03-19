# -*- coding:utf-8 -*-

from Cache import *
from ReplaceAlgorithm import *

if "__main__" == __name__:
    cache = Cache()
    cache.Replace()
    algorithm = LRUReplaceAlgorithm()
    cache.SetReplaceAlgorithm(algorithm)
    cache.Replace()
    algorithm = FIFOReplaceAlgorithm()
    cache.SetReplaceAlgorithm(algorithm)
    cache.Replace()
    algorithm = RANDOMReplaceAlgorithm()
    cache.SetReplaceAlgorithm(algorithm)
    cache.Replace()
