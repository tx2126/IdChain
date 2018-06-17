//
// Created by Alex Xia on 6/16/18.
//

#ifndef IDCHAIN_BLOCKCHAIN_H
#define IDCHAIN_BLOCKCHAIN_H

#include <cstdint>
#include <vector>
#include "Block.h"

using namespace std;

class BlockChain {
public:
    BlockChain();

    void AddBlock(Block bNew);

private:
    uint32_t nDifficulty_;
    vector<Block> vChain_;

    Block GetLastBlock() const;
};

#endif //IDCHAIN_BLOCKCHAIN_H
