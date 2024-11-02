#include <bits/stdc++.h>
// char toLowerCase(char ch)
// {

//     if (ch >= 'a' && ch <= 'z')
//     {
//         return ch;
//     }
//     else
//     {
//         char temp = ch - 'A' + 'a';
//         return temp;
//     }
// }
// bool checkPalindrome(string s)
// {
//     int st = 0;
//     int e = s.size() - 1;
//     while (st <= e)
//     {
//         if (toLowerCase(s[st]) != toLowerCase(s[e]))
//         {

//             return 0;
//         }
//         else
//         {

//             st++;
//             e--;
//         }
//     }
//     return 1;
char toLowercase(char ch){// making character in lower case since it is not case sensitive in the question
    if((ch >= 'a'  && ch<='z') || (ch >= 48 && ch <= 57) ){
        return ch;
    }
    else{
        ch = ch + 32;// a to b -> 97 to 122 | A to B -> 65 to 90 
        //can also write as => s = s - 'A' + 'a';
        return ch;
    }
}
int getLength(string s){//there is no need to give size in character array
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++){
        count++;
    }
    return count;
}


bool checkPalindrome(string s)
{
    // Write your code here.
    // s is not case senstive 
    int i = 0;
    int j = getLength(s) - 1;

    while(i<=j){
   
        while((s[i] >0 && s[i]<48) || (s[i]>57 && s[i]<65) || (s[i]>90 && s[i]<97)){// 0 to 9 => 48 to 57
            i++;
        }
        while((s[j] >0 && s[j]<47) || (s[j]>57 && s[j]<65) || (s[j]>90 && s[j]<97) ){
            j--;
        }
        
        if(toLowercase(s[i++])!= toLowercase(s[j--])){
            return false;
        }
    }
    return true;

}