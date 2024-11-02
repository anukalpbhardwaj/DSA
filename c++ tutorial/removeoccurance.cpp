string removeOccurance(string s, string part){

    while(s.length()!=0 && s.find(part) <s.length()){

        s.erase(s.find(part), part.length());
    }
    return s;
}
tring removeDuplicates(string s) {
        int i=0,j=1;
        while(i<s.length()-1 && s.length()>0){
            if(s[i]==s[j]){
                while((i>0 && j<s.length()-1) && s[i-1]==s[j+1]){
                    i--;
                    j++;
                }
                s.erase(i,j-i+1);
                j=i+1;
                continue;
            }
            i++;
            j++;
        }
        return s;
    }