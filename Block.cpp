//
// Created by Alex Xia on 6/16/18.
//

#include <sstream>
#include "Block.h"
#include "sha256.h"

using std::string;

Block::Block(uint32_t nIndexIn, const std::string &sDataIn) : nIndex_(nIndexIn), sData_(sDataIn) {
    nNonce_ = -1;
    tTime_ = time(nullptr);
}

std::string Block::GetHash() {
    return sHash_;
}

void Block::MineBlock(uint32_t nDifficulty) {
    char cstr[nDifficulty + 1];
    for (uint32_t i = 0; i < nDifficulty; ++i) {
        cstr[i] = '0';
    }
    cstr[nDifficulty] = '\0';

    string str(cstr);

    do {
        nNonce_++;
        sHash_ = CalculateHash();
    } while (sHash_.substr(0, nDifficulty) != str);

    std::cout << "Block mined: " << sHash_ << std::endl;
}

inline string Block::CalculateHash() const {
    std::stringstream ss;
    ss << nIndex_ << tTime_ << sData_ << nNonce_ << sPrevHash;
    return sha256(ss.str());
}