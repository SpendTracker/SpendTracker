//
// Created by Bao Jun on 12/12/15.
//

#include <fstream>
#include <string>
#include <vector>
#include "account/Account.h"

#ifndef SPENDTRACKER_STORAGELOAD_H
#define SPENDTRACKER_STORAGELOAD_H

class StorageLoad {
public:
    StorageLoad();
    virtual ~StorageLoad();

    std::vector<Account> execute(std::vector<Account> allData);

private:
    std::string readfile(std::ifstream &file);
};


#endif //SPENDTRACKER_STORAGELOAD_H
