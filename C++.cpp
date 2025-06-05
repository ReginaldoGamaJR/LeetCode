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
// 9.Palindrome Number //////////////////////////////////////////////////////////
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        string numero = to_string(x);
        int left = 0, right = numero.size() - 1;
        while(right > left){
            if(numero[left] != numero[right]){
                return false;
            }else{
                left ++;
                right --;
            }
            
        }
        return true;
    }
};
/////////////////////////////////////////////////////////////////////////////////
// 13.Roman To Integer //////////////////////////////////////////////////////////
class Solution {
public:
    int romanToInt(string s) {
            map<char, int> map = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int valor = 0;
        for(int i = 0;i<s.size();i++){
            if(i + 1 < s.size() && map[s[i]] < map[s[i+1]]){
                valor -= map[s[i]];
            } else{
                valor += map[s[i]];
            }
        }
        return valor;
    }
};
/////////////////////////////////////////////////////////////////////////////////
/// 14. Longest Common Prefix ///////////////////////////////////////////////////
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 1){
            return strs[0];
        }
    string resultado = "";
        string atual = strs[0];
        for (int j = 1;j < strs.size();j++){
            string nova = "";
            for (int k = 0;k < strs[j].size();k++){
                if(atual[k] == strs[j][k]){
                    nova.push_back(atual[k]);
                } else{
                    break;                
                }
            }
            if(j == 1) {
                resultado = nova;
            }
            if (nova < resultado){
                resultado = nova;
            }
        }
     return resultado;
    }
};
/////////////////////////////////////////////////////////////////////////////