class Solution {
public:
    string reverseOnlyLetters(string s) {
        int left = 0;
        int right = s.length() - 1;
        while(left < right){
            if(!(s[left] >= 'a' && s[left] <= 'z'||
               s[left] >= 'A' && s[left] <= 'Z'
            )){
                left++;
            }
            else if(!(s[right] >= 'a' && s[right] <= 'z' ||
               s[right] >= 'A' && s[right] <= 'Z'
            )){
                right--;
            }
            else{
                char temp = s[left];
                s[left] = s[right];
                s[right] = temp;
                left++;
                right--;
            }
            

        }
        return s;
        
    }
};