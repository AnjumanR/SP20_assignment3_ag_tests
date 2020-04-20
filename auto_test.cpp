//
// Created by Shreyas Rajesh on 4/19/20.
//

#include "MadLibsController.hpp"
#include "MadlibAutoWordProvider.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    // Tests for Automatic input based Madlibs.
    MadlibWordProvider *theAutoProvider = new MadlibAutoWordProvider;
    //Tests for each type of Substitute word
    // Test 1: Noun
    std::string word_type = "noun";
    std::string out;
    out = theAutoProvider->getSubstituteWord(theAutoProvider->getTypeForLabel(word_type));
    if(out == "aardvark"|| out == "bangladesh" || out == "bank" || out == "banker" || out == "bar" || out == "barber" || out == "bat"
    || out == "orange" || out == "blue" || out == "green" || out == "purple" || out == "apple" || out == "quail" || out == "rabbit"
    || out == "red" || out == "eight" || out == "five" || out == "fourth"){
        std::cout << "Success" << std::endl;
    }

    //Test 2: name
    word_type = "name";
    out = theAutoProvider->getSubstituteWord(theAutoProvider->getTypeForLabel(word_type));
    if(out == "Thompson" || out == "Curry"){
    std::cout << "Success" << std::endl;}

    //Test 3: Verb
    word_type = "verb";
    if(out == "be" || out == "begin"){
    out = theAutoProvider->getSubstituteWord(theAutoProvider->getTypeForLabel(word_type));
    std::cout << "Success" << std::endl;}

    //Test 4: Adjective
    word_type = "adjective";
    if(out == "courteous" || out == "crazy" || out == "scared"){
    out = theAutoProvider->getSubstituteWord(theAutoProvider->getTypeForLabel(word_type));
    std::cout << "Success" << std::endl;}

    //Test 5: Adverb
    word_type = "adverb";
    if(out == "scarcely" || out == "absentmindedly"){
    out = theAutoProvider->getSubstituteWord(theAutoProvider->getTypeForLabel(word_type));
    std::cout << "Success" << std::endl;}

    //Test 6: Number
    word_type = "number";
    if(out == "eight" || out == "five" || out == "fourth"){
    out = theAutoProvider->getSubstituteWord(theAutoProvider->getTypeForLabel(word_type));
    std::cout << "Success" << std::endl;}

    //Test 7: Colour
    word_type = "colour";
    out = theAutoProvider->getSubstituteWord(theAutoProvider->getTypeForLabel(word_type));
    if(out == "green" || out == "blue" || out == "purple"){
    std::cout << "Success" << std::endl;}

    //Test 8: Fruit
    word_type = "fruit";

    out = theAutoProvider->getSubstituteWord(theAutoProvider->getTypeForLabel(word_type));
    if(out == "apple" || out == "orange"){
    std::cout << "Success" << std::endl;}

    //Test 9: Animal
    word_type = "animal";
    out = theAutoProvider->getSubstituteWord(theAutoProvider->getTypeForLabel(word_type));
    if(out == "aardvark" || out == "bat" || out == "quail" || out == "rabbit"){
        std::cout << "Success" << std::endl;}

    //Test 10: place
    word_type = "place";
    out = theAutoProvider->getSubstituteWord(theAutoProvider->getTypeForLabel(word_type));
    if(out == "bangladesh" || out == "bank"){
    std::cout << "Success" << std::endl;}

}


