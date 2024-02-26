#include <iostream>

#include <string>

std::string DNAtoRNA(std::string dna){
    for(int i = 0 ; i < dna.size();i++){
        if(dna[i] == 'T'){
            dna[i] ='U';
        }
    }
    return dna;

    // Alternative
    // std::replace(dna.begin(), dna.end(), 'T', 'U');
    // return dna;
}

int main(){
    std::cout<<DNAtoRNA("GCAT");
    return 0;
}