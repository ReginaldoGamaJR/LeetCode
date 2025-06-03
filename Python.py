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