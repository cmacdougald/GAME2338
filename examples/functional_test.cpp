#include <iostream>
#include <string>

int getFaceNumber(int intpCard) {
    return ((intpCard - 1) % 13) + 1;
}

bool testCardgetFaceNumber() {
    // Test: function getFaceNumber should only return face values between 1 to 13 for all 52 cards.
    for(int intCounter = 1; intCounter <= 52; intCounter++) {
        if(getFaceNumber(intCounter) > 13 || getFaceNumber(intCounter) < 1) {
            return false;
        }
    }
    return true;
}

std::string testPassFail(bool boolpResult) {
    return (boolpResult ? "Pass" : "Fail");
} 

int getSuiteNumber(int intpCard) {
    return ((intpCard - 1) / 13) + 1;
}

std::string getSuiteString(int intpCard) {
    switch (getSuiteNumber(intpCard))
    {
        case 1:
            return "Club";
            break;
        case 2:
            return "Diamonds";
            break;
        case 3:
            return "Hearts";
            break;
        case 4:
            return "Spades";
            break;
    }
    return "Error: Invalid Card Suite";
}

std::string getFaceString(int intpCard) {
    switch (getFaceNumber(intpCard))
    {
        case 1:
            return "Ace";
            break;
        case 11:
            return "Jack";
            break;
        case 12:
            return "Queen";
            break;
        case 13:
            return "King";
            break;
        default:
            return std::to_string(getFaceNumber(intpCard));
            break;
    }
    return "Error: Invalid Card Face";
}

std::string getCardString(int intpCard) {
    return getFaceString(intpCard) + " of " + getSuiteString(intpCard);
}

int main() {
    // Deck of Cards 52
    // Suites = 4
    // Face = A, 2-10, J, Q, K = 13
    int intCard = 37;

    std::cout << "Please enter a card index (1-52): ";
    std::cin >> intCard;

    if(intCard > 52) {
        intCard = 52;
        std::cerr << "Warning: intCard is greater than 52. Default is 52." << std::endl;
    } else if (intCard < 1) {
        intCard = 1;
        std::cerr << "Warning: intCard is less than 1. Default is 1." << std::endl;
    }
//          A                         J  Q  K
//Row 1:    1  2  3  4  5  6 7 8 9 10 11 12 13 - Clubs
//Row 2:    14 15 16 17 18 ...              26 - Diamonds
//Row 3:    27                              39 - Hearts
//Row 4:    40                              52 - Spades
    std::cerr << "Test 1/1: " << testPassFail(testCardgetFaceNumber()) << std::endl;
    std::cout << "Face Value: " << getFaceNumber(intCard) << std::endl;
    std::cout << "Suite Value: " << getSuiteNumber(intCard) << std::endl;
    std::cout << "Card: " << getCardString(intCard) << std::endl;
}
