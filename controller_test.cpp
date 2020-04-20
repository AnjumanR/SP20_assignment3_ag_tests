//
// Created by Shreyas Rajesh on 4/19/20.
//
#include "MadLibsController.hpp"
#include "MadlibUserWordProvider.hpp"
#include "MadlibAutoWordProvider.hpp"

using namespace std;

int main(int argc, const char * argv[]) {

    // Tests for User input based Madlibs.
    MadlibWordProvider *theProvider = new MadlibUserWordProvider;
    MadLibsController *theController = new MadLibsController;
    std::vector<std::string> required_words;
    std::vector<std::string> words;
    const char* file = "../madlibs1.txt";


    if(theController->readFile(file)) {
        theController->getSubstitutes(*theProvider);
        //Test 1
        // Check if the keywords picked in required_words are correct.
        required_words = theController->getRequiredWords();
        std::string user_out;
        for(auto it=required_words.begin(); it!=required_words.end();it++){
            user_out += *it;
            user_out += " ";
        }
        if(user_out == "verb adjective adjective pluralnoun adjective fruit name place adjective name color animal adjective adjective adjective noun number pluralnoun pluralnoun "){
            std::cout << "Success" << std::endl;
        }

        //Test 2
        // Check if input is being fed in correctly from the user.
        words = theController->getWords();
        std::string user_words;
        for(auto it=words.begin();it!=words.end();it++){
            user_words += *it;
            user_words += " ";
        }
        if(user_words == "spying brilliant powerful information sensitive apple Germans markets real rock grey cat fun unimaginable large laser-gun one friends enemies "){
            std::cout << "Success" << std::endl;
        }

        //Test 3
        // Check if the passage output is correct.
        theController->showFinishedStory(cout);
    }


    delete theProvider;
    delete theController;


    MadlibAutoWordProvider *theAutoProvider = new MadlibAutoWordProvider;
    MadLibsController *theAutoController = new MadLibsController;

    if (theAutoController->readFile(file)) {
        theAutoController->getSubstitutes(*theAutoProvider);

        //Test 4
        // Check if the keywords picked in required_words are correct.
        required_words = theAutoController->getRequiredWords();
        std::string auto_out;
        for(auto it=required_words.begin(); it!=required_words.end();it++){
            auto_out += *it;
            auto_out += " ";
        }
        //std::cout << auto_out << std::endl;
        if(auto_out == "verb adjective adjective pluralnoun adjective fruit name place adjective name color animal adjective adjective adjective noun number pluralnoun pluralnoun "){
            std::cout << "Success" << std::endl;
        }

        //Test 5
        // Check if input is being fed in correctly from the auto generator.
        words = theAutoController->getWords();
        for(int i=0;i<words.size();i++) {
            if (required_words[i] == "verb") {
                if (words[i] == "be" || words[i] == "begin") {
                    std::cout << "Success" << std::endl;
                }
            } else if (required_words[i] == "color") {
                if (words[i] == "green" || words[i] == "blue" || words[i] == "purple") {
                    std::cout << "Success" << std::endl;
                }
            } else if (required_words[i] == "name") {
                if (words[i] == "Curry" || words[i] == "Thompson") {
                    std::cout << "Success" << std::endl;
                }
            }
        }
    }
    delete theAutoProvider;
    delete theAutoController;
}
