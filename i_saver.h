#pragma once

#include "document.h"

class ISaver {
public:
    virtual ~ISaver() = default;
    virtual void save(const Document& document) = 0;
};
