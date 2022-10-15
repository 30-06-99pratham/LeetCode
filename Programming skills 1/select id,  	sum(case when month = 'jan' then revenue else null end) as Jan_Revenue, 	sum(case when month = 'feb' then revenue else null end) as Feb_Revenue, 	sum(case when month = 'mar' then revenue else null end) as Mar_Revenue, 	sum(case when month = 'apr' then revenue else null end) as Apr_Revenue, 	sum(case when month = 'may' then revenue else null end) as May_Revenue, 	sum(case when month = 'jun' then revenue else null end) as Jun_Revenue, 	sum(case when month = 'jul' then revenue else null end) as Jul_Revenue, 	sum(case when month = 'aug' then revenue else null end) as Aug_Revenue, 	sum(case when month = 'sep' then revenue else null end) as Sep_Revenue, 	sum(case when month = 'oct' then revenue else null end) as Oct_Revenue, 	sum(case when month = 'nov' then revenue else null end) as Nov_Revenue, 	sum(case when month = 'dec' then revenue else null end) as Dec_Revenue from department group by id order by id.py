def(self, points:List[List[int]])->int:
  ans=0
  for i in range(0,len(points)-1):
    xdiff = abs(points[i][0] - points[i+1][0])
    ydiff = abs(points[i][1] - points[i+1][1])
    mxDiff = max(xdiff,ydiff)
    ans+=mxDiff)
   return ans
    
    
