//
// Created by Alex Xia on 6/17/18.
//

#include "BlockChain.h"

BlockChain::BlockChain() {
    vChain_.emplace_back(Block(0, "Genesis Block"));
    nDifficulty_ = 6;
}

void BlockChain::AddBlock(Block bNew) {
    bNew.sPrevHash = GetLastBlock().GetHash();
    bNew.MineBlock(nDifficulty_);
    vChain_.push_back(bNew);
}

Block BlockChain::GetLastBlock() const {
    return vChain_.back();
}