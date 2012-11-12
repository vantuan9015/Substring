#include<iostream>
#include<cstring>
#include "substring.h"

using namespace std;

bool is_prefix(const char* string1, const char* string2, int position){

  //  cout << "string1: " << string1[position] << endl;
  //cout << "string2: " << string2[position] << endl;
  //cout << "position: " << position << endl;

  // conversion to pointer arithmetic by doing string1+pos. which is same as string1[position] //
  if(*(string1+position) == '\0' ){
    return true;
  }
  else if(*(string1+position) == *(string2+position)){
    return is_prefix(string1,string2, position + 1);
  }
  else 
    return false;

}

// CHAR* are Cstrings //
int substring_position(const char* string1,const char* string2){

  if(strlen(string2)==0 && strlen(string1)==0){
    return 0;
  }  

  else {
    for(unsigned int i = 0; i < strlen(string2); i++){
      if(is_prefix(string1,string2+i,0)){
	return i;
      }
    }
  }
  return -1;
}
