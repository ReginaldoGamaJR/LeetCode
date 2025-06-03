////////////////////////////////////LeetCode////////////////////////////
//// 1.TwoSum //////////////////////////////////////////////////////////
var twoSum = function(nums, target) {
    for (let i = 0; i < nums.lenght;i++){
        for (let j = 0; j < nums.lenght;j++){
            if (nums[i] + nums[j] === target){
                return [i,j]
            }
        }
    }
};
////////////////////////////////////////////////////////////////////////
/// 2.Add TwoNumbers ///////////////////////////////////////////////////
var addTwoNumbers = function(l1, l2) {
    let head = new ListNode(0);
    let current = head;
    let carry = 0;

    while(l1 !== null || l2 !== null){
        let x = (l1 !== null) ? l1.val : 0;
        let y = (l2 !== null) ? l2.val : 0;
        let sum = carry + x + y;

        carry = parseInt(sum/10)
        current.next = new ListNode(sum % 10);
        current = current.next;

        if (l1 !== null) l1 = l1.next;
        if (l2 !== null) l2 = l2.next;
    }

    if (carry > 0) {
        current.next = new ListNode(carry);
    }

    return head.next;
    
};
/////////////////////////////////////////////////////////////////////