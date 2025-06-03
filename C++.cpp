///////////////////////////// LeetCode //////////////////////////////
//// 1.TwoSum ///////////////////////////////////////////////////////
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size();i++){
            for (int j = i + 1; j < nums.size();j++){
                if(nums[i] + nums[j] == target){
                    return {i,j};}
                }
            }
        return {};
    }
};
//////////////////////////////////////////////////////////////////////
// 2.Add Two Numbers ////////////////////////////////////////////////
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* current = head;
        int carry = 0;
        while(l1 != NULL || l2 != NULL){
            int x,y,soma;
            if(l1 != NULL){
                x = l1 -> val;
            }else{
                    x = 0; 
            }
            if(l2 != NULL){
                y = l2 -> val;
            }else{
                    y = 0;    
            }
            soma = carry + x + y;

            carry = int(soma/10);
            current -> next = new ListNode(soma % 10);
            current = current -> next;

            if(l1 != NULL){
                l1 = l1 -> next;
            }
            if(l2 != NULL){
                l2 = l2 -> next;
            }
                        
        }
        if (carry > 0){
            current -> next = new ListNode(carry);
        }
    return head -> next;
        
    }
};
//////////////////////////////////////////////////////////////////////////////////