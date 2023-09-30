#include<iostream>
using namespace std;
int getCharIndex(char c){
  int idx=-1;
  if(c>='a' && c<='z'){
    idx=c-'a';
  }
  else if (c>='A' && c<='Z'){
    idx=c-'A';
  }
  return idx;
}

void countFreq(const string &str, int *freq){
  int idx;
  for (const char &c : str){
    idx=getCharIndex(c);
    if(idx!=-1)
    {
      ++frequency[idx];
    }
  }
}

bool isPerm(const string &str){
  int freq[26]={0};
  constFreq(str,freq);
  bool oddAppeared=false;
  for (int i=0;i<26;++i){
    if(freq[i]%2 && oddAppeared){
    return false;
  } else if(freq[i]%2 && !oddAppeared) {
    oddAppeared=true;
  }
 }
  return true;
}

int main(){
  string str("Tact coa");
  cout<<isPerm(str);
  return 0;
}
















