//
// Created by Alex Xia on 6/16/18.
//

#ifndef IDCHAIN_BLOCK_H
#define IDCHAIN_BLOCK_H

#include <cstdint>
#include <iostream>
#include <string>

class Block {
public:
    std::string sPrevHash;

    Block(uint32_t nIndexIn, const std::string &sDataIn);

    std::string GetHash();

    void MineBlock(uint32_t nDifficulty);

private:
    uint32_t nIndex_;
    int64_t nNonce_;
    std::string sData_;
    std::string sHash_;
    time_t tTime_;

    std::string CalculateHash() const;
};

#endif //IDCHAIN_BLOCK_H
