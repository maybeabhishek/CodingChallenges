class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int index = n-1;
        int carry = 1;
        while(true){
            if(index == -1)
                break;
            digits[index] += carry;
            if(digits[index] > 9){
                digits[index] = 0;
                carry = 1;
            }
            else{
                carry = 0;
                break;
            }
            index--;   
        }
        
        if(carry == 1)
            digits.insert(digits.begin(), 1);
        return digits;
    }
};