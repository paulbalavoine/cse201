#include <iostream>
#include <string>
#include <cstdlib>

bool isPunctuation(char character){
  if (character=='.'||character==' '||character=='!'||character=='?'||character==','||character==';'||character==':'){
    return true;
  }
  return false;
}

bool findSecondWord(std::string input_str, std::string &second, int& a, int& b){
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
        a=i;
      }
    }else if (step==3){
      if (isPunctuation(input_str[i])){
        step++;
        b=i;
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

bool obfuscating(std::string &str, int &dist){
  int a=0;
  int b=0;
  dist=0;
  std::string origin = str;
  std::string sec;
  findSecondWord(str, sec, a, b);
  for (int i=0; i<str.length(); i++){
    if ((i<a||i>=b)&&!isPunctuation(str[i])){
      str[i]=((rand() % (26)) + 65);
    }
  }
  for (int i=0; i<str.length(); i++){
    if (!str[i]==origin[i]){
      dist++;
    }
  }
}

int main()
{
std::string str;
std::cout<<"Entrez votre ligne"<<std::endl;
std::getline(std::cin, str);
int dist;
obfuscating(str, dist);

std::cout<<str<<" ("<<dist<<")"<<std::endl;

}
