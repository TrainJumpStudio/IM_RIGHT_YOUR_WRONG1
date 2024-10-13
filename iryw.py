import numpy as np
import time



def createAndSumArr(x: int):

    start = time.time()

    arr = np.empty(x, dtype = np.int64)


    for i in range(x):
        arr[i] = i
    
    return np.sum(arr), (time.time()-start)


sum, t = createAndSumArr(100000000)

print(f"Sum -> {sum}, Time -> {t}")

