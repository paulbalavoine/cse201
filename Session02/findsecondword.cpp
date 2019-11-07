#include <iostream>
#include <string>

bool isPunctuation(char character){
  if (character=='.'||character==' '||character=='!'||character=='?'||character==','||character==';'||character==':'){
    return true;
  }
  return false;
}

bool findSecondWord(std::string input_str, std::string &second){
  int step=0;
//I use step to represent the following : 0=didn't begin first word. 1=I am in first word. 2=I am in the punctuations before the second word. 3=I am in the second word. 4=Second word is done.
  for (int i=0; i<input_str.length(); i++){
    if (step==0){
      if (!isPunctuation(input_str[i])){
        step++;
      }
    }else if (step==1){
      if (isPunctuation(input_str[i])){
        step++;
      }
    }else if (step==2){
      if (!isPunctuation(input_str[i])){
        step++;
      }
    }else if (step==3){
      if (isPunctuation(input_str[i])){
        step++;
      }
    }else if (step==4){
      return true;
    }
    if (step==3){
      second=second+input_str[i];
    }
  }
  return true;
}

int main()
{
std::string str;
std::string(second);
std::cout<<"Entrez votre ligne"<<std::endl;
std::getline(std::cin, str);

findSecondWord(str, second);

std::cout<<second<<" ("<<second.length()<<")"<<std::endl;

}
