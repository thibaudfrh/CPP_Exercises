#include <iostream>
#include <string>
#include <set>
#include <map>
#include <sstream>



std::set<std::string> make_exit_commands(){
    std::set<std::string> s;
    s.insert("q");
    s.insert("quit");
    s.insert("e");
    s.insert("exit");

    return s;
} 

int main()
{   
    std::map<std::string, std::string> dico;
    while(true){
        std::set<std::string> s;
        
        s = make_exit_commands();
        std::string word;
        std::string word1;
        std::string word2;
        std::cin >> word;
        if(s.find(word) != s.end()){
            return 0;
        }
        if(word == "add"){
            std::cin >> word1;
            std::cin >> word2;
            std::cout << word1 << " => " << word2 << std::endl;
            dico[word1] = word2;
            
        }

        if(word == "translate"){
            
            std::getline(std::cin, word); 
            std::stringstream ss(word);
            while(ss >> word1){
                if(dico.find(word1) != dico.end()){
                    std::cout << dico[word1] << std::endl;
                }
                else{
                    std::cout << "???" << std::endl;
                }
            }
        }

        if(word == "print"){
            std::map<std::string,std::string>:: iterator p;
            for(p = dico.begin(); p != dico.end(); p++){
                std::cout << p -> first << " => " << p -> second << std::endl;
                
            }
        }
        
         
    } 
    

    return 0;
}