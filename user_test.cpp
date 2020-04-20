//
// Created by Shreyas Rajesh on 4/19/20.
//

#include "../MadLibsController.hpp"
#include "../MadlibUserWordProvider.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    // Tests for Automatic input based Madlibs.
    MadlibWordProvider *theProvider = new MadlibUserWordProvider;
    //Tests for each type of Substitute word
    // Test 1: Test for proper input
    std::string word_type = "noun";
    std::string out;
    out = theProvider->getSubstituteWord(theProvider->getTypeForLabel(word_type));
    if(out == "spying") {
        std::cout << "Success" << std::endl;
    }

    out = theProvider->getSubstituteWord(theProvider->getTypeForLabel(word_type));
    if(out == "brilliant") {
        std::cout << "Success" << std::endl;
    }
    return 0;
}



