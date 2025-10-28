class Solution:
    def hasSameDigits(self, s: str) -> bool:
        s = [int(number) for number in s]
        if(len(s)<2):
            return False
        else:
            while(len(s)>2):
                new_s = []
                for i in range(len(s) - 1):
                    new_s.append((s[i] + s[i + 1]) % 10)
                s = new_s
        return s[0] == s[1]