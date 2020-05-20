from collections import deque

def restoreBinaryStrings(binary_length):

    q = deque()
    binaryStrings = []

    q.append("0")
    q.append("1")

    while len(q) != 0:
        
        binaryString = q.popleft()

        if len(binaryString) == binary_length:
            binaryStrings.append(binaryString)
            continue

        nextZeroBinary = binaryString + "0"
        nextOneBinary = binaryString + "1"

        q.append(nextZeroBinary)
        q.append(nextOneBinary)
    
    return binaryStrings




test_case = int(input())

for test_num in range(test_case):

    test = list(map(int, sys.stdin.readline().rstrip().split()))
        
    string_length = sum(test)+1

    binary_strings = restoreBinaryStrings(string_length)
       

    flag = False
    for i in range(len(binary_strings)):
        cur_binary = binary_strings[i]
          
        temp = [0,0,0,0]
           
        for j in range(len(cur_binary)-1):
            sub_binary = cur_binary[j:j+2]
               
            if sub_binary == "00":
                temp[0] += 1
            elif sub_binary == "01":
                temp[1] += 1
            elif sub_binary == "10":
                temp[2] += 1
            else:
                temp[3] += 1
            
        for k in range(4):
            if test[k] != temp[k]:
                break
        if k == 3:
            flag = True 
            
        if flag == True:
            print("#{} {}".format(test_num+1, cur_binary))
            break 
    if flag == False:
        print("#{} impossible".format(test_num+1))
            






