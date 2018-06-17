//
// Created by Alex Xia on 6/16/18.
//

#ifndef IDCHAIN_BLOCK_H
#define IDCHAIN_BLOCK_H

#include <cstdint>
#include <iostream>

class Block {
public:
    string sPrevHash;

    Block(uint32_t nIndexIn, const string &sDataIn);

    string GetHash();

    void MineBlock(uint32_t nDifficulty);

private:
    uint32_t nIndex_;
    int64_t nNonce_;
    string sData_;
    string sHash_;
    time_t tTime_;

    string CalculateHash() const;
};

#endif //IDCHAIN_BLOCK_H
