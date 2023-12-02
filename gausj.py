import numpy as array
import sys

n = int(input("tamanho matriz :"))

Array = array.zeros((n,n+1)) 

Array2 = array.zeros(n)


for l in range(n):
    for c in range(n+1):
        Array[l][c]=float(input('Array['+str(l)+']['+ str(c)+']='))

for l in range(n):
    if Array[l][l] == 0.0:
       sys.exit('divide')

    for c in range(n):
        if l != c:
            div = Array[c][l]/Array[l][l] 

            for i in range(n+1):
                Array[c][i] = Array[c][i] - div * Array[l][i]


for l in range(n):
    Array2[l] = Array[l][n]/Array[l][l]


print('\nSolução: ')

for l in range(n):
    print('X%d = %0.2f' %(l,Array2[l]), end = '\t')



     
        
        

