'''
import sys

sys.setrecursionlimit(1000000)
def solution(root, checked, n, res, edges):

    
    for i in range(1,len(root)):
        node = root[i]
        if checked[node] == False:
            checked[node] = True
            res[node] = root[0]
           
            solution(edges[node-1], checked, n, res, edges) 


if __name__ == '__main__':
    n = int(sys.stdin.readline())

    
    edges = [[i] for i in range(1,n+1)]
    

    for _ in range(n-1):
        n1, n2 = list(map(int,sys.stdin.readline().rstrip().split()))
        edges[n1-1].append(n2)
        edges[n2-1].append(n1)
    
    checked = [False] * (n+1)
    
    res = [1] * (n+1) 
   
    
    for i in range(n):
        if checked[i+1] == False:
            checked[i+1] = True
            solution(edges[i], checked, n, res,edges)
    
    for i in range(2,n+1):
        print(res[i])

'''

import sys


def solution(root,edges):
    checked = [False] * (n+1)
    stack = [root]

    my_parent = [1] * (n+1) 

    checked[root] = True 
    while len(stack) != 0:
        p_node = stack.pop()

        for i in range(1,len(edges[p_node-1])):
            c_node = edges[p_node-1][i]
            if checked[c_node] == False:
                my_parent[c_node] = p_node
                checked[c_node] = True
                stack.append(c_node)
    return my_parent
   


if __name__ == '__main__':
    n = int(sys.stdin.readline())

    edges = [[i] for i in range(1,n+1)]
    

    for _ in range(n-1):
        n1, n2 = list(map(int,sys.stdin.readline().rstrip().split()))
        edges[n1-1].append(n2)
        edges[n2-1].append(n1)
    
    
    
    res = solution(1,edges) 
    
    for i in range(2,n+1):
        print(res[i])

