from collections import deque

def solution(priorities, location):
    answer = 0
    
    priority_check = [0] * 10

    priorities_q = deque()
    for i in range(len(priorities)):
        priority = priorities[i]
        target = False
        if i == location:
            target = True 
        priority_check[priority] += 1
        priorities_q.append({
            'priority': priority,
            'target': target
        })

    while len(priorities_q) != 0:
        front = priorities_q.popleft()
        priority = front['priority']
        target = front['target']
        
       

        flag = True
        for i in range(priority+1, 10):
            if priority_check[i] > 0:
                flag = False
                break
        if flag == False:
            priorities_q.append(front)
        else:
            priority_check[priority] -= 1
            answer += 1
            if target == True:
                break
            

    return answer


res = solution([2, 1, 3, 2]	,2)
print(res)


