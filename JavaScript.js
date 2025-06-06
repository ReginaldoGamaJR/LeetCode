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
/// 9.Palindrome Numbers ////////////////////////////////////////////
var isPalindrome = function(x) {
    if(x < 0){
        return false
    }
    let numero = String(x);
    let left = 0;
    let right = numero.length - 1;
    while(left < right){
        if(numero[left] != numero[right]){
            return false 
        }else{
            left += 1;
            right -= 1;
        }
    }
    return true
};
/////////////////////////////////////////////////////////////////////
/// 13.Roman To Integer /////////////////////////////////////////////
var romanToInt = function(s) {
    let romano = {
    'I': 1,
    'V': 5,
    'X': 10,
    'L': 50,
    'C': 100,
    'D': 500,
    'M': 1000
    }
    let valor = 0
    for(let i = 0; i < s.length;i++){
        if(i + 1 < s.length && romano[s[i]] < romano[s[i+1]]){
            valor -= romano[s[i]]
        }else{
            valor += romano[s[i]]
        }
    }
    return valor
};
/////////////////////////////////////////////////////////////////////
// 14.Longest Commom Prefix ////////////////////////////////////////
var longestCommonPrefix = function(strs) {
    let resultado = strs[0];
    for(let i = 0;i < strs.length;i++){
        let j = 0;
        while(j < resultado.length && j < strs[i].length && resultado[j] == strs[i][j]){  
            j++;
        }
        resultado = resultado.slice(0,j);
        if (resultado.length == 0){
            return resultado;
        }
    }
    return resultado;
};
//////////////////////////////////////////////////////////////////
// 20 . Valid Parentheses ////////////////////////////////////////
var isValid = function(s) {
    let pilha = [];
    for (let char of s){
        if(char == '(' || char == '{' || char == '['){
            pilha.push(char);
        }
        else{
            if(pilha.length == 0){
                return false;
            }
            else{
                let topo = pilha[pilha.length - 1];
                if(char == ')' && topo != '(' || char == '}' && topo != '{' || 
                char ==  ']' && topo != '['){
                    return false;
                }
            }            
            pilha.pop();
            } 
        }   
    return (pilha.length == 0);
};
///////////////////////////////////////////////////////////////////////////////