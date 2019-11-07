#include <iostream>
#include <string>

// is the substring of str between [start, end] a palindrome?
bool isPalindromeAux(std::string &str, int start, int end){
  if (start==end || (end==start+1 && str[start]==str[end])){
    return true;
  }
  if (!(str[start]==str[end])){
    return false;
  }
  return isPalindromeAux(str, start+1, end-1);
}

// is the entire string str a palindrome?
bool isPalindrome(std::string &str){
  return isPalindromeAux(str, 0, str.length()-1);
}

int main()
{
  std::string str = "";
  std::cout<<"What is your word?"<<std::endl;
  std::cin>>str;
  if (isPalindrome(str)){
    std::cout<<"Congratulations, it is indeed a palindrom!"<<std::endl;
  }else{
    std::cout<<"Sorry, but it is not a palindrom"<<std::endl;
  }
  return 0;
}
