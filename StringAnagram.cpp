#include <iostream>
#include <bits/stdc++.h>

bool areAnagram(std::string str1, std::string str2){

  int n1 = str1.length();
  int n2 = str2.length();

  if(n1 != n2){
    return false;
  }

  sort(str1.begin(), str1.end());
  sort(str2.begin(), str2.end());

  for(int i = 0; i < n1; i++){
    if(str1[i] != str2[i]){
      return false;
    }
  }

  return true;

}

int main(){

  std::string str1;
  std::string str2;
  std::cout << "\nInput the strings: ";
  std::cin >> str1 >> str2;
  
  if(areAnagram(str1, str2)){
    std::cout << "The two strings are anagrams of each other.\n";
  }

  else{
    std::cout << "The two strings are not anagrams of each other.\n";
  }

  return 0;

}