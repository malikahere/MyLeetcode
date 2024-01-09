class Solution {
public:
    bool isPalindrome(int x) {
     long long d=x , m=0;
		for (int i = x; i > 0; i=i/10){
		
	     m=m*10+i%10;
			
		}
		if(d==m)
        {
            return true;
        }
        else{
            return false;
        }
     
     
    }
};