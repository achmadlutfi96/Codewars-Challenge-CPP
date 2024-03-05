#include <iostream>

#include <string>
#include <vector>

std::string reverse_words(const std::string& str) {
    std::vector<std::string> words;
    std::string word = "";
    char s = ' ';
    for(size_t i = 0; i <= str.size(); i++){
        if(str[i] == s || i == str.size()){
            words.push_back(word);
            word = "";
            continue;
        }
        word += str[i];
    }

    std::string res;
    for(int i = words.size()-1; i >= -1; i--){
        res += words[i];
        if(i > 0){
            res += " ";
        }
    }
    return res;

    // Alternative
//   string result = "";
//   string temp = ""; // this
  
//   for (int i = 0; i < str.length(); i++)
//   {
//     if (str[i] == ' ')
//     {
//       result = temp + " " + result;
//       temp = "";
//     }
//     else
//     {
//       temp += str[i];
//     }
//   }
  
//   result = temp + " " + result;
//   result.pop_back();
  
//   // [1] yoda " "
//   // [2] doesn't " " yoda " "
//   // [3] speak " " doesn't " " yoda " "
//   // [4] like " " speak " " doesn't " " yoda " "
//   // [5] this " " like " " speak " " doesn't " " yoda " "
  
//   return result;
}



int main(){
    std::cout<<reverse_words("yoda doesn't speak like this");
    return 0;
}