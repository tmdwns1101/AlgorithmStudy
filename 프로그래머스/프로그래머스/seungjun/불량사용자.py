global_banned_users = []

def excute_banned_user(banned_candidate, idx, banned_users, n):
    global global_banned_users
    if idx == n:
        banned_users = sorted(banned_users)
        if set(map(tuple,[banned_users])).issubset(set(map(tuple,global_banned_users))) == False:
            global_banned_users.append(banned_users)
            return 1
        else:
            return 0
    else:
        cnt = 0
        for i in range(len(banned_candidate[idx])):
            if banned_users.count(banned_candidate[idx][i]) == 0:
                banned_users.append(banned_candidate[idx][i])
                cnt += excute_banned_user(banned_candidate, idx+1, banned_users, n)
                banned_users.pop()
        return cnt



def solution(user_id, banned_id):

    banned_candidate = [[]  for _ in range(len(banned_id))]


    for i in range(len(banned_id)):
        banned_user = banned_id[i]
        for j in range(len(user_id)):
            nomal_user = user_id[j]
            flag = True

            if len(banned_user) != len(nomal_user):
                flag = False
            else:
                for k in range(len(banned_user)):
                    
                    if banned_user[k] != nomal_user[k] and banned_user[k] != '*':
                        flag = False
                        break
            if flag == True:
                banned_candidate[i].append(nomal_user)
    
    banned_users = []
    
    ans = excute_banned_user(banned_candidate, 0, banned_users, len(banned_id))
    return ans


res = solution(["frodo", "fradi", "crodo", "abc123", "frodoc"],["fr*d*", "*rodo", "******", "******"])
print(res)



                    


