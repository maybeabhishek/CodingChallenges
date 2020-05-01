class G: 
    def __init__(self,graph): 
          
        # residual graph 
        self.graph = graph  
        self.numbers = len(graph) 
        self.sets = len(graph[0]) 
        self.mod = 1e9 + 7
    
    def bpm(self, u, matchR, seen): 
  
        for v in range(self.sets): 
            if self.graph[u][v] and seen[v] == False: 
                seen[v] = True 
                if matchR[v] == -1 or self.bpm(matchR[v],  
                                               matchR, seen): 
                    matchR[v] = u 
                    return True
        return False
  
    # Returns maximum number of matching  
    def maxBPM(self): 
        matchR = [-1] * self.sets 
          
        result = 0 
        for i in range(self.numbers): 
            seen = [False] * self.sets 
            if self.bpm(i, matchR, seen): 
                result += 1%self.mod
        return result 



t = int(input().strip())

while(t>0):
    n = int(input().strip())
    arr = []
    graph = [[0]*100]*10
    
    d = {}
    for i in range(n):
        a = list(map(int, input().strip().split(" ")))
        for j in a:
            try:
                graph[i][j] = 1
            except:
                continue
    g = G(graph)
    print (int(g.maxBPM()))


    t-=1

