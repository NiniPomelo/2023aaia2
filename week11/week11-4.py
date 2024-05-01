# LeetCode 2000. Reverse Prefix of Word
# 要把word裡, ch 字母(包括)之前的字,反過來
# 這題的關鍵,是先找到 ch 在 word 裡是第幾個為置。
class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        for i in range(len(word)): # 重點1:找到字母
            if word[i]==ch: # 找到字母了，這時候i很重要
                #重點2: 把 word[0]...word[i] 字反過來
                return word[i::-1] + word[i+1:] # Python 的特殊範圍的寫法
        # 如果都沒有提早結束，就是找不到。就原來的字回傳
        return word