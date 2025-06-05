################################# LeetCode ############################
## 1.TwoSum ###########################################################
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(len(nums)):
            for j  in range(i+1,len(nums)):
                if nums[i] + nums[j] == target:
                    return [i,j]
#######################################################################
## 2.Add Two Numbers ##################################################
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        head = ListNode(0)
        current = head
        carry = 0

        while l1 is not None or l2 is not None:
            x = l1.val if l1 else 0
            y = l2.val if l2 else 0
            sum = carry + x + y

            carry = sum // 10
            current.next = ListNode(sum % 10)
            current = current.next

            if l1: l1 = l1.next
            if l2: l2 = l2.next

        if carry > 0:
            current.next = ListNode(carry)
        return head.next
#########################################################################
### 9.Palindrome Numbers ################################################
class Solution:
    def isPalindrome(self, x: int) -> bool:
        numero = str(x)
        left = 0
        right = len(numero) - 1
        while(left < right):
            if numero[left] is not numero[right] :
                return False
            else:
                left += 1
                right -= 1
        return True
#########################################################################
## 13.Roman To Integer ##################################################
class Solution:
    def romanToInt(self, s: str) -> int:
        letras = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
        }
        valor = 0
        for i in range(len(s)):
            if i + 1 < len(s) and letras[s[i]] < letras[s[i+1]]:
                valor -= letras[s[i]]
            else:
                valor += letras[s[i]]
        return valor
##########################################################################
## 14. Longest Commom Prefix #############################################
class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        resultado = list(strs[0]);
        for i in range(1,len(strs)):
            j = 0
            while j < len(resultado) and j < len(strs[i]) and resultado[j] == strs[i][j]:         
                j += 1
            resultado = resultado[:j]
        return "".join(resultado)   
###########################################################################