class Solution:
    def numberOfBeams(self, bank: List[str]) -> int:
        count=[]
        for i in bank:
            if "1" in i:
                count.append(i.count("1"))
        number = 0
        for i in range(len(count)-1):
            number += count[i]*count[i+1]
        
        return number
        