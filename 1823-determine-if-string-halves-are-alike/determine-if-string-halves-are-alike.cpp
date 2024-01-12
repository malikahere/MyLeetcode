class Solution {
public:
 bool Vowel(char ch)
    {
        if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'||ch=='u')return true;
        else if (ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'||ch=='U') return true;
        else return false;
    }
    bool halvesAreAlike(string s) {
        
        int i = 0, j = s.size() - 1;
          int cnt = 0;
          while (i < j){
              if(Vowel(s[i]))cnt++;
            if(Vowel(s[j]))cnt--;
            i++,j--;
          }
        if(cnt==0){return true;}
        else
        { return false;}

    }
};