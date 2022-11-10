class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        st = []
        cnt = 0
        for i in s:
            if i == '(':
                st.append(i)
            elif i == ')':
                if len(st)!=0:
                    st.pop()
                elif len(st)==0:
                    cnt+=1              
    
                
        return abs(cnt) + len(st)        
