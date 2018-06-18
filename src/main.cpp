//
// Created by Alex Xia on 6/16/18.
//
#include <cstdint>
#include <iostream>
#include "BlockChain.h"

int main() {
    BlockChain block_chain = BlockChain();

    cout << "Mining block 1..." << endl;
    block_chain.AddBlock(Block(1, "Block 1 Data"));

    cout << "Mining block 2..." << endl;
    block_chain.AddBlock(Block(2, "Block 2 Data"));

    cout << "Mining block 3..." << endl;
    block_chain.AddBlock(Block(3, "Block 3 Data"));

    return 0;
}
