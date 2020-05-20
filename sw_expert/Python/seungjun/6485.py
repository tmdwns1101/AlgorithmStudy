def count_routes(routes, bus_stops):

    counts = [0] * 5001

    for i in range(len(routes)):
        st, ed = routes[i]
        for j in range(st, ed+1):
            counts[j] += 1
    
    ans = []
    for i in range(len(bus_stops)):
        ans.append(counts[bus_stops[i]])
    
    return ans 



T = int(input())

for test_case in range(1, T + 1):
    n = int(input())
    routes = []
    for i in range(n):
        route = list(map(int,input().rstrip().split()))
        routes.append(route)
    
    p = int(input())

    bus_stops = []
    for i in range(p):
        bus_stop = int(input())
        bus_stops.append(bus_stop)

    result = count_routes(routes, bus_stops)
    result = " ".join(list(map(str,result)))
    print("#{} {}".format(test_case, result))
